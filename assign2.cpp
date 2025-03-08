/*
 * CS106L Assignment 2: Marriage Pact
 * Created by Haven Whitney with modifications by Fabio Ibanez & Jacob Roberts-Baca.
 *
 * Welcome to Assignment 2 of CS106L! Please complete each STUDENT TODO
 * in this file. You do not need to modify any other files.
 *
 */

#include <fstream>
#include <iostream>
#include <queue>
#include <set>
#include <string>
#include <unordered_set>

std::string kYourName = "Jhony Peñaherrera"; // Don't forget to change this!

/**
 * Takes in a file name and returns a set containing all of the applicant names as a set.
 *
 * @param filename  The name of the file to read.
 *                  Each line of the file will be a single applicant's name.
 * @returns         A set of all applicant names read from the file.
 *
 * @remark Feel free to change the return type of this function (and the function
 * below it) to use a `std::unordered_set` instead. If you do so, make sure
 * to also change the corresponding functions in `utils.h`.
 */
std::set<std::string> get_applicants(std::string filename) {
  std::set<std::string> applicants;  

  std::ifstream file(filename);

  // Manejo de Errores
  if (!file.is_open()) {
    std::cerr << "Error: No se pudo abrir el archivo " << filename << std::endl;
    return applicants;
  }
  std::string line;

  while (std::getline(file, line)) {
    // Eliminar espacios en blanco al principio y al final de la línea
    line.erase(0, line.find_first_not_of(' '));
    line.erase(line.find_last_not_of(' ') + 1);

    if (!line.empty()) {
      applicants.insert(line);
    }
  }

  file.close();

  return applicants;
  
}




/**
 * Takes in a set of student names by reference and returns a queue of names
 * that match the given student name.
 *
 * @param name      The returned queue of names should have the same initials as this name.
 * @param students  The set of student names.
 * @return          A queue containing pointers to each matching name.
 */
std::queue<const std::string*> find_matches(std::string name, std::set<std::string>& students) {
  std::queue<const std::string*> matches;

  // Iniciales del nombre
  std::string initials;
  for (const auto& word:name) {
    if (word !=' ') {
      initials += toupper(word);
    }
  }

  // Coincidencias
  for (const auto& student:students) {
    std::string student_initials;
    for (const auto& word:student) {
      if (word !=' ') {
        student_initials += toupper(word);
      }
    }

    if (student_initials == initials) {
      matches.push(&student);
    }
  }

  return matches;
}




/**
 * Takes in a queue of pointers to possible matches and determines the one true match!
 *
 * You can implement this function however you'd like, but try to do something a bit
 * more complicated than a simple `pop()`.
 *
 * @param matches The queue of possible matches.
 * @return        Your magical one true love.
 *                Will return "NO MATCHES FOUND." if `matches` is empty.
 */
std::string get_match(std::queue<const std::string*>& matches) {
  
  if (matches.empty()) {
    return "NO MATCHES FOUND.";
  }

  return *matches.front();
}

/*
int main() {
  std::set<std::string> applicants = get_applicants("students.txt");
  std::queue<const std::string*> matches = find_matches("Jhony Penaherrera", applicants);
  std::string match = get_match(matches);

  std::cout << "Tu amor verdadero es: " << match << std::endl;

  return 0;
}
*/

/* #### Please don't remove this line! #### */
#include "autograder/utils.hpp"
