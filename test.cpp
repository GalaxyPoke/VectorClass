#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//int main()
//{
//	//自己类型的迭代器进行初始化
//	//其他容器的迭代器进行初始化
	//vector<int> v1(5,1);
	//vector<int> v2(v1.begin(), v1.end());//自己类型的迭代器进行初始化
	//for (auto e : v2)
	//{
	//	cout << e << " ";
	//}
	//cout << endl;
 // string s1 = "GalaxyPokemon"; //其他容器的迭代器进行初始化
	//vector<char> v3(s1.begin(), s1.end());
	//for (auto e : v3)
	//{
	//	cout << e << " ";
	//}
	//cout << endl;

	////还能用数组进行初始化，本质是指针，数组名代表首元素的地址
	//int arr[] = { 1,2,3,4 };
	//vector<int> v4(arr,arr+4);
	//for (auto e : v4)
	//{
	//	cout << e << " ";
	//}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 5,11,8,9};
//	vector<int> v1(arr, arr + 4);
//	//升序 <
//	sort(v1.begin(), v1.end());
//	for (auto e : v1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	//降序
//	greater<int> g;//后面会讲，先学使用
//	sort(v1.begin(), v1.end(),g);
//	for (auto e : v1)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}

//int main()
//{
//	vector<int> v1; //构造int类型的空容器
//	for (auto e : v1)
//	{
//		cout << e << " ";
//	}
//	vector<int> v2(10, 2); //构造含有10个2的int类型容器
//	for (auto e : v2)
//	{
//		cout << e << " ";
//	}
//	vector<int> v3(v2); //拷贝构造int类型的v2容器的复制品
//	for (auto e : v3)
//	{
//		cout << e << " ";
//	}
//	vector<int> v4(v2.begin(), v2.end());//自己类型的迭代器进行初始化
//	for (auto e : v4)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	string s1 = "GalaxyPokemon"; //其他容器的迭代器进行初始化
//	vector<char> v5(s1.begin(), s1.end());
//	for (auto e : v5)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//还能用数组进行初始化，本质是指针，数组名代表首元素的地址
//	int arr[] = { 1,2,3,4 };
//	vector<int> v6(arr, arr + 4);
//	for (auto e : v6)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}

//int main()
//{
//	int a[3];   // 正常定义的----静态数组
//
//	vector<int> str_a;   // vector定义的----动态数组
//
//	return 0;
//}

//int main()
//{
//	vector<int> v(5, 1);
//	//使用“下标+[]”的方式遍历容器
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	vector<int> v(5, 1);
//	//使用“下标+[]”的方式遍历容器
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		cout << v.at(i) << " ";
//	}
//	cout << endl;
//	return 0;
//}
//int main()
//{
//	vector<int> v(5, 1);
//	cout << v.front() << endl;
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	vector<int> v(arr, arr + 4);
//	cout << v.back() << endl;
//	return 0;
//}

//int main()
//{
//	vector<int> v(2, 10);
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	vector<int> v(10, 1);
	//cout << v.size() << endl;
//
//	return 0;
//}

//int main()
//{
//	vector<int> v(10, 1);
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//
//	return 0;
//}

//int main()
//{
//	vector<int> v;
//	cout << v.empty() << endl;
//
//	v.push_back(1);
//	v.push_back(2);
//	cout << v.empty() << endl;
//
//	return 0;
//}

//int main()
//{
//	vector<int> v;
//	size_t sz = v.capacity();
//	v.reserve(100); // 提前将容量设置好，可以避免一遍插入一遍扩容
//	cout << "making bar grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//	return 0;
//}

//int main()
//{
//	vector<int> v;
//
//	v.resize(5);
//	return 0;
//}


//int main()
//{
//	vector<int> v1;
//	v1.reserve(10);
//	for (size_t i = 0; i < 10; i++)
//	{
//		v1[i] = i;
//	}
//	return 0;
//}