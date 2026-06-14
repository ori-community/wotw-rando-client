#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetType__Enum_DEFINED)
#define IL2CPP_STRUCT_TargetType__Enum_DEFINED
enum class TargetType__Enum : int32_t {
    Function = 0x00000000,
    Field = 0x00000001,
};
#endif
#if !defined(IL2CPP_STRUCT_TargetType__Enum_FWDDECL)
#define IL2CPP_STRUCT_TargetType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TargetType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TargetType__Enum_FWDDECL)
#include <Modloader/app/structs/TargetType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
