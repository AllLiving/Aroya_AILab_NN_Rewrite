#ifndef AROYA_DATE
#define AROYA_DATE
class AroyaDate {
public:
	AroyaDate();
	/*date format
	YYYY?MM?DD
	?���κη������ַ�
	*/
	int getWeekday(const string&dateStr);
	/*��ȡ���׼ʱ������ڲ�*/
	int getDateInstant(const string&dateStr);
private:
	const static int StartYear = 2000;
	const static int StartMonth = 1;
	const static int StartDay = 1;
	const static int StartWeekday = 6;
};
#endif // !AROYA_DATE
