class Arge
{
  public:
  static int nbYear(int p0, double percent, int aug, int p){
  double s = p0;
        int n = 0;
        while (s < p) {
            s = s * (percent / 100.0 + 1) + aug;
            n++;
        }
        return n;
        }
};
