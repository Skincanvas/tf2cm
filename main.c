#include <stdio.h>

int main()
{
	int fps;
	int lod;
	int picmip;
	/*int suicide;*/

	FILE *a = fopen("autoexec.cfg", "a"); /*autoexec*/
	FILE *b = fopen("scout.cfg", "a"); /*scout*/
	FILE *c = fopen("soldier.cfg", "a"); /*soldier*/
	FILE *d = fopen("pyro.cfg", "a"); /*pyro*/
	FILE *e = fopen("demoman.cfg", "a"); /*demoman*/
	FILE *f = fopen("heavyweaponsguy.cfg", "a"); /*heavy*/
	FILE *g = fopen("engineer.cfg", "a"); /*engineer*/
	FILE *h = fopen("sniper.cfg", "a"); /*sniper*/
	FILE *i = fopen("medic.cfg", "a"); /*medic*/
	FILE *j = fopen("spy.cfg", "a"); /*spy*/

	/*sensible defaults*/
	fprintf(a, "rate 100000\ncl_cmdrate 100\ncl_updaterate 100\ncl_smooth 0\n\nfov_desired 90\nviewmodel_fov 90\n\n");
	fprintf(b, "cl_interp 0.0303\ncl_interp_ratio 2\n\n");
	fprintf(c, "cl_interp 0.0152\ncl_interp_ratio 1\n\n");
	fprintf(d, "cl_interp 0.0152\ncl_interp_ratio 1\n\n");
	fprintf(e, "cl_interp 0.0152\ncl_interp_ratio 1\n\n");
	fprintf(f, "cl_interp 0.0303\ncl_interp_ratio 2\n\n");
	fprintf(g, "cl_interp 0.0303\ncl_interp_ratio 2\n\n");
	fprintf(h, "cl_interp 0.0303\ncl_interp_ratio 2\n\n");
	fprintf(i, "cl_interp 0.0152\ncl_interp_ratio 1\n\n");
	fprintf(j, "cl_interp 0.0303\ncl_interp_ratio 2\n\n");


	printf("TF2CM is software designed to streamline common configuration options for Team Fortress 2. After generation, you must place all .cfg files created in this directory into your Team Fortress 2/tf/cfg folder in order for any changes to take effect.\n\n");

	printf("fps_max control your maximum fps ingame. This option should be a multiple of your monitor refresh rate +1. For example, if you use a 60hz monitor you would choose 121. However it is also worth considering how source handles fps, where 300 fps will allegedly always be more smooth.\n");
	scanf("%d", &fps);
	fprintf(a, "fps_max = %d\n", fps);

	printf("r_lod controls how close or far away model detail is lowered for performance. -1 being balanced, 0 being best and 2 being worst.\n");
	scanf("%d", &lod);
	fprintf(a, "r_lod = %d\n", lod);

	printf("Mat_picmip is a command which influences how close mipmap textures are to be generated. With -1 being best quality, and 4 being best performance, what picmip value would you like?\n");
	scanf("%d", &picmip);
	fprintf(a, "mat_picmip = %d\n", picmip);

	/*printf("You would want to bind a button to kill yourself. This is best for medics as often times in gametypes like ultiduo staying alive is actually a bad thing.\n");
	scanf("%s", &suicide);
	fprintf(a, "bind %s "kill"\n", suicide);*/
}