#include <string>
#include <vector>

class StringConstants {
public:
	// 1. static const�� ����� ����
	// �� ����� ��� �ν��Ͻ����� �����˴ϴ�.
	static const std::string kStaticConstGreetingMessage; // static const

	// 2. constexpr�� ����� ����
	// ������ Ÿ�ӿ� �򰡵Ǵ� ����Դϴ�.
	static constexpr const char* kConstexprGoodbyeMessage = "Goodbye, World!"; // constexpr

	// 3. inline�� ����� ���� �� ����
	// ����� ���Ǹ� ���ÿ� �ϸ�, �ߺ� ���Ǹ� �����մϴ�.
	static inline const std::string kInlineErrorMessage = "An error has occurred."; // inline
	static inline const std::vector<std::string> kFruits = { "apple", "banna", "cherry" }; // inline

	// 4. consteval�� ����� �޼���
	// ������ Ÿ�ӿ� �򰡵Ǵ� �޼����Դϴ�.
    static consteval const char* GetDynamicGreeting() {
        return "Hello, from a dynamic context!";
    }


};

// 1. static const�� ���� ����
const std::string StringConstants::kStaticConstGreetingMessage = "Hello, World!"; // static const ����

// ��� ����
#include <iostream>

int main() {
	std::cout << StringConstants::kStaticConstGreetingMessage << std::endl; // "Hello, World!"
	std::cout << StringConstants::kConstexprGoodbyeMessage << std::endl; // "Goodbye, World!"
	std::cout << StringConstants::kInlineErrorMessage << std::endl; // "An error has occurred."
	std::cout << StringConstants::GetDynamicGreeting() << std::endl; // "Hello, from a dynamic context!"

	return 0;
}
