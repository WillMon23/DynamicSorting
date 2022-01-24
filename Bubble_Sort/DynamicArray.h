#pragma once

template <typename T>
class DynamicArray
{
public:
	DynamicArray();
	~DynamicArray();

	void addItem(T* item);
	bool removeItem(T* item);
	void sortItems();
	T* getItem(int index);
private:
	T** m_items;
	int m_length;

};

template<typename T>
inline DynamicArray<T>::DynamicArray()
{

}

template<typename T>
inline DynamicArray<T>::~DynamicArray()
{
	delete[] m_items;
}

template<typename T>
inline void DynamicArray<T>::addItem(T* item)
{
	T** temp = new T[m_length + 1];
	for (int i = 0; i < m_length; i++)
		temp[i] = m_items[i];

	temp[m_length] = item;
	m_length++;

	delete[] m_items;
	m_items = temp;
	

}

template<typename T>
bool DynamicArray<T>::removeItem(T* item)
{
	int j = 0;
	bool removed = false;
	T** temp = new T[m_length - 1];
	for (int i = 0; i < m_length; i++)
	{
		if (m_items[i] != item)
		{
			temp[j] = m_items[i];
			j++;
		}
		else
			removed = true;
	}
	if (removed)
	{
		delete[] m_items;
		m_items = temp;
	}
	
	return removed;
}

template<typename T>
void DynamicArray<T>::sortItems()
{
	int j = 0;
	int key = 0

	for(int i = 1; i < m_length; i++)
	{
		key = m_items[i];
		j = i - 1;
		while (i < 0 && m_items[j] > kay)
		{
			if (m_items[j] > kay)
			{
				m_items[j + 1] = m_items[j];
				j--;
			}
		}
		m_items[j + 1] = key;
	}

}

template<typename T>
T* DynamicArray<T>::getItem(int index)
{
	return m_items[index];
}
