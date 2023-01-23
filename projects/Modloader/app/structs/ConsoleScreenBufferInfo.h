#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsoleScreenBufferInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsoleScreenBufferInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleScreenBufferInfo_DEFINED)
#include <Modloader/app/structs/Coord.h>
#include <Modloader/app/structs/SmallRect.h>
#if defined(IL2CPP_STRUCT_Coord_DEFINED) && defined(IL2CPP_STRUCT_SmallRect_DEFINED)
#define IL2CPP_STRUCT_ConsoleScreenBufferInfo_DEFINED
struct ConsoleScreenBufferInfo {
    struct Coord Size;
    struct Coord CursorPosition;
    int16_t Attribute;
    struct SmallRect Window;
    struct Coord MaxWindowSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConsoleScreenBufferInfo_FWDDECL)
#define IL2CPP_STRUCT_ConsoleScreenBufferInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_ConsoleScreenBufferInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleScreenBufferInfo_DEFINED) && !defined(IL2CPP_STRUCT_ConsoleScreenBufferInfo_FWDDECL)
#include <Modloader/app/structs/ConsoleScreenBufferInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsoleScreenBufferInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
