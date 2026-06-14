#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventFieldFormat__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventFieldFormat__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventFieldFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_EventFieldFormat__Enum_DEFINED
enum class EventFieldFormat__Enum : int32_t {
    Default = 0x00000000,
    String = 0x00000002,
    Boolean = 0x00000003,
    Hexadecimal = 0x00000004,
    Xml = 0x0000000b,
    Json = 0x0000000c,
    HResult = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_EventFieldFormat__Enum_FWDDECL)
#define IL2CPP_STRUCT_EventFieldFormat__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventFieldFormat__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventFieldFormat__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EventFieldFormat__Enum_FWDDECL)
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
