#include <stdio.h> 
void date(int year, int day);//�⵵�� �ϼ��� �Է��ϸ� ����� ���
 
int main(void)
{
    int year, day;
    printf("�⵵�� �ϼ� �Է�(��:2016 102): ");
    scanf_s("%d %d", &year, &day);
    date(year, day); //year�� day�� �Է����ڷ� �����Ͽ� �� ���� ��� 
    return 0;
}
 
void date(int year, int day)
{
    int mdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int month;
    int mday = day;//mday�� day�� ���� 
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))//���� �Ǵ� 
    {
        mdays[1] = 29;//2������ �� ���� 29�� ���� 
    }
    for (month = 0; mday>mdays[month]; month++)//mday�� mdays[month]���� ũ�� 
    {
        mday -= mdays[month];//mday�� mdays[month]�� ���ݴϴ�. 
    }
    //month�� mdays�� �ε����� ����ؼ� ���� ����� ���� 1�����ؼ� ����մϴ�. 
    printf("%d�⵵�� %d��° ���� %d�� %d���Դϴ�.\n", year, day, month + 1, mday);
}
