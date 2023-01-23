#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Region__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Region__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Region__Enum_DEFINED)
#define IL2CPP_STRUCT_Region__Enum_DEFINED
enum class Region__Enum : int32_t {
    USCentral = 0x00000000,
    USEast = 0x00000001,
    EUWest = 0x00000002,
    Singapore = 0x00000003,
    Japan = 0x00000004,
    Brazil = 0x00000005,
    Australia = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_Region__Enum_FWDDECL)
#define IL2CPP_STRUCT_Region__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Region__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Region__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Region__Enum_FWDDECL)
#include <Modloader/app/structs/Region__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Region__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
