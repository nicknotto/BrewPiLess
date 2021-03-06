#ifndef TimeKeeper_H
#define TimeKeeper_H

class TimeKeeperClass
{
public:
	TimeKeeperClass(void):_referenceSeconds(0),_referenceSystemTime(0){}
	void begin(char* server1,char* server2,char* server3);
	void begin(void);

	time_t getTimeSeconds(void); // get Epoch time
	const char *getDateTimeStr(void);

	void setInternetAccessibility(bool connected){ _online=connected; }
	void setCurrentTime(time_t current);
private:
	time_t _referenceSeconds;
	time_t _referenceSystemTime;
	bool _online;

	time_t _lastSaved;
	void saveTime(time_t t);
	time_t loadTime(void);
};

extern TimeKeeperClass TimeKeeper;

#endif
