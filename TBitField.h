#ifndef T_BIT_FIELD
#define T_BIT_FIELD

#include <ostream>
#include <string>
#include <vector>

class TBitField
{
private:
	std::vector<uint8_t> m_arr{};
	size_t m_size{};
	size_t m_countTrue{};

public:
	// +-+-+-+-+-+-+-+-+-+-+-+ Конструкторы +-+-+-+-+-+-+-+-+-+-+-+

	// Конструктор с передачей параметра bits (количество битов)
	TBitField(size_t bits);
	// Конструктор с передачей параметра cstr (const char*)
	TBitField(const char* cstr);
	// Конструктор с передачей параметра str (std::string)
	TBitField(std::string str);
	// Конструктор копирования
	TBitField(const TBitField& other);




	// +-+-+-+-+-+-+-+-+-+-+-+ Методы +-+-+-+-+-+-+-+-+-+-+-+

	// Устанавливает всем битам одно и тоже значение
	TBitField& setAll(bool val = true);
	// Устанавливает одному биту определенное значение
	TBitField& setBit(size_t pos, bool val = true);


	// Изменяет все биты на противоположные (0 -> 1, 1 -> 0)
	TBitField& flipAll();
	// Изменяет один бит на противоположный (0 -> 1, 1 -> 0)
	TBitField& flipBit(size_t pos);


	// Показывает значение бита
	bool checkBit(size_t pos) const;
	// Взвращает true, если все биты = 1, иначe false
	bool all() const noexcept;
	// Возвращает ture, если найдется хотя бы один бит = 1, иначе false
	bool any() const noexcept;


	// Возвращает размер битовой строки
	size_t size() const noexcept;
	// Возвращает количество битов с определенным значением
	size_t count(bool val = true) const noexcept;
	// Возвращает биты в формате std::string
	std::string toString() const noexcept;




	// +-+-+-+-+-+-+-+-+-+-+-+ Перегрузка операторов +-+-+-+-+-+-+-+-+-+-+-+

	// Перегрузка оператора присваивания (=)
	TBitField& operator = (const TBitField& other) noexcept;
	// Перегрузка оператора равенства (==)
	bool operator == (const TBitField& other) const noexcept;
	// Перегрузка оператора неравенства (!=)
	bool operator != (const TBitField& other) const noexcept;
	// Оператор побитового И (&)
	TBitField operator & (const TBitField& other) const noexcept;
	// Оператор побитового ИЛИ (|)
	TBitField operator | (const TBitField& other) const noexcept;
	// Оператор побитового ИИСКЛЮЧАЮЩЕГО ИЛИ (^)
	TBitField operator ^ (const TBitField& other) const noexcept;
	// Метод побитового ОТРИЦАНИЯ (~)
	TBitField operator ~ () const noexcept;
	// Оператор побитового сдвига вправо на определенное количество бит
	TBitField operator >> (const size_t val) const noexcept;
	// Оператор побитового сдвига влево на определенное количество бит
	TBitField operator << (const size_t val) const noexcept;
	// Дружственная функция оператороа потока вывода
	friend std::ostream& operator << (std::ostream& out, const TBitField& obj);
};

std::ostream& operator << (std::ostream& out, const TBitField& obj);

#endif // T_BIT_FIELD