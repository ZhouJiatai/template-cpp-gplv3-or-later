/*
    Copyright (C) 2021 Zhou Jiatai

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <iostream>
// ����
using namespace std;

#if (__cplusplus < 201103L)
#error "��ʹ��֧�� C++11 ��׼�ı�������"
#endif // __cplusplus < 201103L

inline void beginning()
{
    cout << "template-cpp-gplv3-or-later 0.0.0\n"
         << "Copyright (C) 2021 Zhou Jiatai\n"
         << "���֤��GPL-3.0-or-later��GPLv3+��\n"
         << "�������Դ������Դ�"
         << "<https://github.com/ZhouJiatai/template-cpp-gplv3-or-later>���ء�\n\n"
         << "������Ϊ���������"
         << "������������˷�����GNUͨ�ù������Э���Լ���£�"
         << "����Զ�������ٷ������޸ġ�"
         << "Э��汾Ϊ����������㣩���µİ汾��\n"
         << "����ϣ�����������������ã�������֤��"
         << "��������֤���о��ü�ֵ���ʺ��ض���;��"
         << "����μ�GNUͨ�ù������Э�顣\n"
         << "�������յ�һ��GNUͨ�ù������Э��ĸ��������û�У�"
         << "�����<http://www.gnu.org/licenses/>\n\n"
         << "�������÷��ɻ�����Э��Ҫ��"
         << "�κΰ�Ȩ�����˻򱾳��򰴱�Э����ܴ��ڵ�"
         << "�������޸ĺ��ٷ����ߣ������������ʧ�������Σ�"
         << "��������ʹ�û��߲���ʹ�ñ�������ɵ�"
         << "�κ�һ��ġ�����ġ�ż���Ļ��ش����ʧ"
         << "�������������������ݶ�ʧ������ʧ�桢���"
         << "�������ĺ�����ʧ�����������޷��뱾����Эͬ��������"
         << "��ʹ��Щ�����ƻ�Դ˸���\n\n"
         << "��������\n";
}

// ��������

inline void exit_the_program()
{
    cout << "\n�밴�س����˳�...";
    cin.get();
}

int main()
{
    beginning();
    // ��������
    exit_the_program();
    return 0;
}
