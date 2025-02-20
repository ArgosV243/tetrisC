# ifndef TETRIS_H
# define TETRIS_H

struct tetris;

struct tetris_block;

void tetris_cleanup_io(void);

void tetris_signal_quit(int);

void tetris_set_ioconfig();

void tetris_init(struct tetris *t,int w, int h);

void tetris_clean(struct tetris *t);

void tetris_print(struct tetris *t);

void tetris_run(int width, int height);

void tetris_new_block(struct tetris *t);

void tetris_print_block(struct tetris *t);

void tetris_rotate(struct tetris *t);

void tetris_gravity(struct tetris *t);

void tetris_fall(struct tetris *t, int l);

void tetris_check_lines(struct tetris *t);

int tetris_level(struct tetris *t); 

#endif //TETRIS_H