#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
	vector<int> answer;
	int run = 0, remove = 0;;
	while (s != "1")
	{
		run++;
		bool ret = false;
		string r("");
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '0')
			{
				remove++;
				ret = true;
				continue;
			}
			r += s[i];
		}
		if (ret)
			s = r;
		if (s == "1")
			break;
		int n = s.length();
		s = "";
		while (n != 0)
		{
			s = to_string(n % 2) + s;
			n /= 2;
		}
	}
	answer.push_back(run);
	answer.push_back(remove);

	return answer;
}
void main()
{
	//test
	//auto ret = solution("110010101001");
}