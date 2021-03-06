#include <iostream>
#include <cassert>


// NOTE: you should move this `if` down as you start solving each task

void task_1()
{

	/*Я ничего не понимаю, что здесь нужно исправить
	 * Мой компилятор говорит, что здесь все нормально, а по переводу от переводчиков
	 * Yandex или Google тоже ничего не понимаю.
	 * Этот код и так работает нормально. Покрайне мере выделяется память под
	 * массив без проблем.
	 *
	 * А вообщее писать задания в русском университете на англиском языке - это
	 * ущемление прав русских граждан, а тем более тех, кто изучает совсем другой
	 * иностранный язык, например меня. Я всю жизнь изучаю немецкий язык и ни слова
	 * не понимаю в вашем англиском языке. Добавляли хотя бы описание задания, которое
	 * нужно сделать, на немецком языке.
	 *
	 *
	 */



    /* Task 1: find a bug in the following declaration.
     * It should help you to compile this with:
     *   g++ -c -pedantic arrays.cpp                                   
     * pedantic flag here means: strictly as in language standard 
     * for explanation see:
     *  https://gcc.gnu.org/onlinedocs/gcc/Variable-Length.html*/
    int n = 10;
    int a[n];
}
/*
 *
 */
// Task 2
void task_2()
{
/*
 * Ничего не понимаю: что должен проверять данный assert. У меня и так все элементы
 * в массиве инициализируются 0. Я что должен проверить? В описании подпрограммы ничего
 * не сказано, что оно должно делать. А в данном случае возможны два возможных условия проверки
 * 1) 4 элемент имеет значение 0?
 * 2) 4 элемент имеет значение не 0?
 * Поскольку у меня элементы массива и так получают значение 0 по-умолчанию при инициализации, то
 * я выберу такой вариант
 */
    int a[5] = {0};
    assert(!a[4]);
    //assert(!a[4]) or assert(a[4]) -- place here one of these and
    //                                 explain your choice in commit msg
}

// returns zero
int task_3_zero()
{
/*
 *
Подсказка 1: ошибку с инициализацией (не назначение) Подсказка 2: Вы можете использовать только один ноль, а не пять из них! кф. задача 2
*
* Ничего не понимаю, что нужно сделать. Мой компилятор и так все инициализует
* нулями. Кроме того условие данной задачи крайне непоенятное. Даже толком не понятно, чем можно
* пользоваться, а чем нельзя. В условии сказано, что можно использовать только один 0, а про
* все остальное ничего не сказано, поэтому я реализую так

 */
    // Task 3
    // Hint 1: fix with initialization (not assignment)
    // Hint 2: you can use only one zero and not five of them! cf. task 2
	int a[5]{4,3,2,1,0};
    
    assert(!a[4]);
    return a[4]; // don't touch this!
}

void task_4()
{
    // Task 4: asserts at the end must hold
    // Hint: fix with initialization (not assignment)

	/*
	 * Опять толком не сказано, чем можно пользоваться, а чем нельзя. Поэтому я реализую
	 * так. Я не обращаюсь к каждому элементу, а просто их инициализирую их при
	 * инициализации массива
	 */
    int a[5]{1,2,3,4,5};
    
    assert(a[0] == 1);
    assert(a[1] == 2);
    assert(a[2] == 3);
    assert(a[3] == 4);
    assert(a[4] == 5);    
}

// Task 5
// copy arr1 to arr2
void task_5_copy(int * arr1, int * arr2, int size)
{
    for(int i=0;i<size;i++){
    	arr2[i]=arr1[i];
    }
}

// Task 6
// copy array `arr1` to array `arr2` of the same size
void task_6_poor_copy(int arr1[], int arr2[])
{
	/*
	 * Михалкович говорил, что таким способом не получиться получить размер массива.
	 * Сколько я не пробовал, но sizeof(arr2) возвращал только 4 в не зависимости от размера массива
	 * Михалкович на лекции говорил (это его точные слова): "В функцию никак не передается размер этого массива. То есть в основной программе мы знали кол-во элементов по другим объявленным переменным, а, войдя в функцию, мы это в принципе узнать никак не можем."
	 * Исходя из слов Станислава Станиславовича, это задание реализовать никак не получится
	 * Но приблизительный код я сделал, но он не работает. Копируется только первый элемент в не
	 * зависимости от размера массива
	 */
    // Hint: something wrong here; test this from main()
    for(int i = 0; i < sizeof(arr2)/sizeof(int); i++)
    {
        arr2[i] = arr1[i];
    }
}

// Task 7
// print array `arr`
void task_7_print(int * arr, int size, char delim = ' ')
{
    // Hint: something wrong here; run this from main()
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << delim;
    }
}

