#include <string>
#include <vector>

class StringConstants {
public:
	// 1. static const를 사용한 선언
	// 이 상수는 모든 인스턴스에서 공유됩니다.
	static const std::string kStaticConstGreetingMessage; // static const

	// 2. constexpr를 사용한 선언
	// 컴파일 타임에 평가되는 상수입니다.
	static constexpr const char* kConstexprGoodbyeMessage = "Goodbye, World!"; // constexpr

	// 3. inline을 사용한 선언 및 정의
	// 선언과 정의를 동시에 하며, 중복 정의를 방지합니다.
	static inline const std::string kInlineErrorMessage = "An error has occurred."; // inline
	static inline const std::vector<std::string> kFruits = { "apple", "banna", "cherry" }; // inline

	// 4. consteval을 사용한 메서드
	// 컴파일 타임에 평가되는 메서드입니다.
    static consteval const char* GetDynamicGreeting() {
        return "Hello, from a dynamic context!";
    }


};

// 1. static const에 대한 정의
const std::string StringConstants::kStaticConstGreetingMessage = "Hello, World!"; // static const 정의

// 사용 예시
#include <iostream>

int main() {
	std::cout << StringConstants::kStaticConstGreetingMessage << std::endl; // "Hello, World!"
	std::cout << StringConstants::kConstexprGoodbyeMessage << std::endl; // "Goodbye, World!"
	std::cout << StringConstants::kInlineErrorMessage << std::endl; // "An error has occurred."
	std::cout << StringConstants::GetDynamicGreeting() << std::endl; // "Hello, from a dynamic context!"

	return 0;
}
