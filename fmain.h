/* fmain.c */
// Xark: NOTE Types altered to match C file (not Manx C promotion rules)
int  open_all(void);
int  close_all(void) __attribute__((noreturn));
void read_sample(void);
int  doorfind(USHORT x, USHORT y, ULONG keytype);
int  main(int argc, char ** argv);
void xfer(USHORT xtest, USHORT ytest, USHORT flag);
void find_place(int16_t flag);
void load_actors(void);
BOOL set_encounter(USHORT i, USHORT spread);
void checkdead(int32_t i, int32_t dtype);
void load_carrier(int16_t n);
void revive(int16_t is_new);
void screen_size(int32_t x);
void setmood(char now);
void gen_mini(void);
void pagechange(void);
void wrap_device(void);
void print_options(void);
void propt(int16_t j, int16_t pena);
void do_option(int16_t hit);
void get_turtle(void);
void gomenu(int16_t mode);
void set_options(void);
void load_all(void);
void load_new_region(void);
void effect(int16_t num, int32_t speed);
void mod1save(void);
