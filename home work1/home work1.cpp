//#include <iostream>
//
//int main() {
//    double fileSizeGB, internetSpeedMbps;
//
//    std::cout << "Enter file size in gigabytes: ";
//    std::cin >> fileSizeGB;
//
//    std::cout << "Enter internet speed in megabytes per second: ";
//    std::cin >> internetSpeedMbps;
//
//    double fileSizeMB = fileSizeGB * 1024;
//
//    double internetSpeedMbpsConverted = internetSpeedMbps * 8;
//
//    double downloadTimeSeconds = fileSizeMB / internetSpeedMbpsConverted;
//
//    std::cout << "File upload time: " << downloadTimeSeconds << " seconds" << std::endl;
//
//    return 0;
//}


//
//#include <iostream>
//
//int main() {
//    double flashDriveSizeGB;
//    double movieSizeMB = 760;
//
//    std::cout << "Enter the size of the flash drive in gigabytes: ";
//    std::cin >> flashDriveSizeGB;
//
//    double flashDriveSizeMB = flashDriveSizeGB * 1024;
//
//    int numMovies = flashDriveSizeMB / movieSizeMB;
//
//    std::cout << "On a flash drive " << flashDriveSizeGB << " gigabyte will fit " << numMovies << "films." << std::endl;
//
//    return 0;
//}


//#include <iostream>
//#include <iomanip> 
//
//int main() {
//    double number;
//
//    std::cout << "Enter a decimal number: ";
//    std::cin >> number;
//
//    double roundedNumber = round(number * 100) / 100.0; 
//
//    std::cout << "Rounded number: " << std::fixed << std::setprecision(2) << roundedNumber << std::endl;
//
//    return 0;
//}




//#include <iostream>
//
//int main() {
//    int passCount, debtCount;
//
//    std::cout << "Enter the number of students who passed the assignment: ";
//    std::cin >> passCount;
//
//    std::cout << "Enter the number of students who are in debt: ";
//    std::cin >> debtCount;
//
//    int totalStudents = passCount + debtCount;
//    double debtPercentage = (static_cast<double>(debtCount) / totalStudents) * 100;
//
//    std::cout << "Debt percentage: " << debtPercentage << "%" << std::endl;
//
//    return 0;
//}


//#include <iostream>
//
//int main() {
//    int secondsPassed;
//    const int secondsPerMinute = 60;
//    const int minutesPerHour = 60;
//    const int secondsPerHour = secondsPerMinute * minutesPerHour;
//    const int secondsPerDay = secondsPerHour * 24;
//
//    std::cout << "Enter the number of seconds passed since the beginning of the day: ";
//    std::cin >> secondsPassed;
//
//    int remainingSeconds = secondsPerDay - secondsPassed;
//    int remainingHours = remainingSeconds / secondsPerHour;
//    remainingSeconds %= secondsPerHour;
//    int remainingMinutes = remainingSeconds / secondsPerMinute;
//    remainingSeconds %= secondsPerMinute;
//
//    std::cout << "Time remaining until midnight: " << remainingHours << " hours, " << remainingMinutes << " minutes, " << remainingSeconds << " seconds." << std::endl;
//
//    return 0;
//}



#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main() {
    const double averageRadius = 6371.0; // Средний радиус Земли в километрах

    double surfaceArea = 4 * M_PI * pow(averageRadius, 2);

    std::cout << "Surface area of the Earth (approximate): " << surfaceArea << " square kilometers." << std::endl;

    return 0;
}
