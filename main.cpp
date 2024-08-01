#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

std::vector<std::vector<std::string> > loadDataset(const std::string &path) {
    std::vector<std::vector<std::string> > dataset;
    std::ifstream file(path);

    if (!file.is_open()) {
        std::cerr << "Error: could not open file " << path << std::endl;
        return dataset;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::vector<std::string> row;
        std::stringstream ss(line);

        std::string cell;
        int i = 0;
        while (std::getline(ss, cell, ',')) {
            if (i == 0 || i == 4 || i == 5 || i == 6) { // unmentioned columns I don't care about
                row.push_back(cell);

            }
            i++;
        }

        dataset.push_back(row);

    }
    file.close();
    return dataset;
}


int main() {
    std::string path = "train_sample.csv";
    std::vector<std::vector<std::string> > dataset = loadDataset(path);

    for (const auto& row : dataset) {
        for (const auto& cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}