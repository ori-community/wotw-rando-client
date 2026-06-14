#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriState__Enum_DEFINED)
#define IL2CPP_STRUCT_TriState__Enum_DEFINED
enum class TriState__Enum : int32_t {
    Unknown = -1,
    False = 0x00000000,
    True = 0x00000001,
};
#endif
#if !defined(IL2CPP_STRUCT_TriState__Enum_FWDDECL)
#define IL2CPP_STRUCT_TriState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TriState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TriState__Enum_FWDDECL)
#include <Modloader/app/structs/TriState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
