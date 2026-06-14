#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsoleKeyInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsoleKeyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleKeyInfo_DEFINED)
#include <Modloader/app/structs/ConsoleKey__Enum.h>
#include <Modloader/app/structs/ConsoleModifiers__Enum.h>
#if defined(IL2CPP_STRUCT_ConsoleKey__Enum_DEFINED) && defined(IL2CPP_STRUCT_ConsoleModifiers__Enum_DEFINED)
#define IL2CPP_STRUCT_ConsoleKeyInfo_DEFINED
struct ConsoleKeyInfo {
    uint16_t _keyChar;
    ConsoleKey__Enum _key;

    ConsoleModifiers__Enum _mods;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConsoleKeyInfo_FWDDECL)
#define IL2CPP_STRUCT_ConsoleKeyInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_ConsoleKeyInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleKeyInfo_DEFINED) && !defined(IL2CPP_STRUCT_ConsoleKeyInfo_FWDDECL)
#include <Modloader/app/structs/ConsoleKeyInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsoleKeyInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
