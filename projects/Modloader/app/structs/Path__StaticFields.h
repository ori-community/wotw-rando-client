#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Path__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Path__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Path__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Path__StaticFields_DEFINED
struct Char__Array;
struct String;
struct Path__StaticFields {
    struct Char__Array* InvalidPathChars;
    uint16_t AltDirectorySeparatorChar;
    uint16_t DirectorySeparatorChar;
    uint16_t PathSeparator;
    struct String* DirectorySeparatorStr;
    uint16_t VolumeSeparatorChar;
    struct Char__Array* PathSeparatorChars;
    bool dirEqualsVolume;
    struct Char__Array* trimEndCharsWindows;
    struct Char__Array* trimEndCharsUnix;
};
#endif
#if !defined(IL2CPP_STRUCT_Path__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Path__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Path__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Path__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Path__StaticFields_FWDDECL)
#include <Modloader/app/structs/Path__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Path__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
