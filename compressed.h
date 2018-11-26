#ifndef COMPRESSED_H
#define COMPRESSED_H
typedef unsigned short us;
us dataCompress (us day, us mounth, us year);
void dataExtract(us data ,us &day, us &mounth, us &year);
us dataCompress (us day, us mounth, us year)
{
    us answer = 0;
    answer += (day % 32) << 11;
    answer += (mounth % 13) << 7;
    answer += (year % 100);
    return answer;
}

void dataExtract(us data ,us &day, us &mounth, us &year)
{
    year = data % 128;
    data >>=7;
    mounth = data % 16;
    day = data >> 4;
}


#endif // COMPRESSED_H
