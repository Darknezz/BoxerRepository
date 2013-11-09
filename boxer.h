
class Boxer
{
	private:
		// zmienne
		int skill;
		string name;
		
		// Funckje sk³adowe
		void losuj_skill();
		void losuj_imie();
		
	public:
		
		Boxer(int name, int skill)
		{
			
		}
			
};

void Boxer::losuj_skill(int skill)
{
	skill = rand() % 100;
	return skill;
}

void Boxer::losuj_imie()
{
	
}
