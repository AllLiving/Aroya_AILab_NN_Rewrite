#ifndef AROYA_DATE
#define AROYA_DATE
class AroyaDate {
public:
	AroyaDate();
	/*date format
	YYYY?MM?DD
	?���κη������ַ�
	*/
	void input(const string&dateStr);
	//��ȡ����
	int getWeekday();
	//��ȡ���׼ʱ������ڲ�
	int getDateInstant();
	//��ȡ�·�
	int getMonth();
private:
	int year, month, day, weekday;
	const static int StartYear = 2000;
	const static int StartMonth = 1;
	const static int StartDay = 1;
	const static int StartWeekday = 6;
};
#endif // !AROYA_DATE
