#ifndef V_H
#define V_H

class V {
    public:
        static bool singleassign;
        static bool showtime;
        static void banner();
        static char* libpath();
        static void outln(char* var, ...);
        static void out(char* var, ...);
        static void main(int argc, char* args[]);
};

#endif
