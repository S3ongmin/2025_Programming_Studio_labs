C Programing Lab(Week01)

C001. 트로피 모양 찍기
--------------------
크기를 입력받아 해당 크기에 비례하는 트로피 모양을 출력하라.
가능하면 제시된 변수를 사용하되 부득이한 경우 추가해도 무방하다.

변수 사용:
- int size;
- int stars, blank1, blank2; 
- int i, j
  
**C002. 생활관 점호 프로그램**
---
4층짜리 생활관의 각 층에는 3개씩 호실이 있고, 각 호실은 모두 4인실이다. 즉, 총 48명이 입주해 있다.
1, 2 층은 남학생용 호실이고, 3, 4 층은 여학생용 호실이다. 
다음과 같이 각 호실별로 점호 인원을 입력받아 저장한 후에, 다음과 같은 정보를 계산하여 출력하라.
1) 점호를 받은 남학생 수 전체 남학생 수에 대한 비율
2) 점호를 받은 여학생 수 전체 여학생 수에 대한 비율
3) 점호를 받은 모든 학생 수 전체 인원 수에 대한 비율

변수 사용:
- int person[4][3];
- int sum[3];
- float ratio[3];
- int i, j;

**C003. 생활관 호실 배정 프로그램**
---
2층짜리 생활관에서 학생을 등록하면서 호실을 등록하는 프로그램이다. 
각 층마다 5개의 호실이 준비되어 있으며, 2인 1실로 배정된다. 1층은 남학생용, 2층은 여학생용이다. 
다음 사항을 준수하여 2개 함수를 구현할것:
1. 배정할 호실 찾기
- int findRoom(int person[5]);
- 파라미터: 5개 호실 내에 이미 배정된 사람의 숫자 배열
- 리턴값: 호실번호(1~5)
- 하는 일: 5개의 호실 중 빈 베드가 있는 방을 랜덤으로 찾아낸다. 2명 모두 배정된 호실을 배정하면 안됨. 
3. 배정결과 출력하기
- void printReport(char mn[10][20], int mr[10], int mc, char wn[10][20], int wr[10], int wc);
- 파라미터: 남학생이름 배열, 남학생 배정된 호실번호 배열, 등록된 남학생 수, 여학생이름 배열, 여학생 배정된 호실번호 배열, 등록된 여학생 수
- 리턴값: 없음
- 하는 일: 생활관 호실 배정 결과를 출력한다.
