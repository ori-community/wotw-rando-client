#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewsStatus__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewsStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewsStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_NewsStatus__Enum_DEFINED
enum class NewsStatus__Enum : int32_t {
    None = 0x00000000,
    Unpublished = 0x00000001,
    Published = 0x00000002,
    Archived = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_NewsStatus__Enum_FWDDECL)
#define IL2CPP_STRUCT_NewsStatus__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_NewsStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewsStatus__Enum_DEFINED) && !defined(IL2CPP_STRUCT_NewsStatus__Enum_FWDDECL)
#include <Modloader/app/structs/NewsStatus__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewsStatus__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
