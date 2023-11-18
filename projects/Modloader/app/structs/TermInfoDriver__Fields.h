#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TermInfoDriver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TermInfoDriver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TermInfoDriver__Fields_DEFINED)
#include <Modloader/app/structs/ConsoleColor__Enum.h>
#if defined(IL2CPP_STRUCT_ConsoleColor__Enum_DEFINED)
#define IL2CPP_STRUCT_TermInfoDriver__Fields_DEFINED
struct TermInfoReader;
struct String;
struct StreamReader;
struct CStreamWriter;
struct Char__Array;
struct Object;
struct Hashtable;
struct ByteMatcher;
struct Byte__Array;
struct __declspec(align(8)) TermInfoDriver__Fields {
    struct TermInfoReader* reader;
    int32_t cursorLeft;
    int32_t cursorTop;
    struct String* title;
    struct String* titleFormat;
    bool cursorVisible;
    struct String* csrVisible;
    struct String* csrInvisible;
    struct String* clear;
    struct String* bell;
    struct String* term;
    struct StreamReader* stdin_1;
    struct CStreamWriter* stdout_1;
    int32_t windowWidth;
    int32_t windowHeight;
    int32_t bufferHeight;
    int32_t bufferWidth;
    struct Char__Array* buffer;
    int32_t readpos;
    int32_t writepos;
    struct String* keypadXmit;
    struct String* keypadLocal;
    bool inited;
    struct Object* initLock;
    bool initKeys;
    struct String* origPair;
    struct String* origColors;
    struct String* cursorAddress;
    ConsoleColor__Enum fgcolor;

    struct String* setfgcolor;
    struct String* setbgcolor;
    int32_t maxColors;
    bool noGetPosition;
    struct Hashtable* keymap;
    struct ByteMatcher* rootmap;
    int32_t rl_startx;
    int32_t rl_starty;
    struct Byte__Array* control_characters;
    struct Char__Array* echobuf;
    int32_t echon;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TermInfoDriver__Fields_FWDDECL)
#define IL2CPP_STRUCT_TermInfoDriver__Fields_FWDDECL
#include <Modloader/app/structs/ByteMatcher.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CStreamWriter.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StreamReader.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TermInfoReader.h>
#endif
#undef IL2CPP_STRUCT_TermInfoDriver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TermInfoDriver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TermInfoDriver__Fields_FWDDECL)
#include <Modloader/app/structs/TermInfoDriver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TermInfoDriver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
