#include <iostream>
/// @brief Софтина должа читать файлик с фамилиями и выдвавать номера билетов
/// (известно количество билетов и permutation параметр).
/// 1. Все три значения: ФИО, количество билетов, permutation вляют на результат
/// 2. Номера билетов это не просто рандом, а детерменированный рандом. Т.е. для
///    одного набора параметров ВСЕГДА один и тотже номер билета. Т.е. должна быть
///    повторяемость.
/// 3. По-сути делаем генератор ПСП.
/// 4. "Равномерно" - значит распределение билетов честное (не 1 билет на всех).
///    А коллизии возможны впринципе.

/*TODO:
 * 1. Парсим аргументы getopt'ом
 * 2. Читаем файлик в вектор
 * 3. Принтим содержимое вектора + результат п.4
 * 4. * Можно считать хэш от 3х параметров (+ %mod N_билетов), если хэш-функция збс (т.е. у ней мало коллизий)
 *    * Можно считать хэш от 3х параметров и пихать его в seed рандома, затем брать рандом %mod N_билетов.
 *      Хотя по-сути это не нужно - это хэш функция фигня и хэши совпали - то и результат рандома, тоже будет
 *      совпадать*/
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}