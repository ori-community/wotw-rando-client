#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ImplicitUseTargetFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ImplicitUseTargetFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImplicitUseTargetFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_ImplicitUseTargetFlags__Enum_DEFINED
enum class ImplicitUseTargetFlags__Enum : int32_t {
    Default = 0x00000001,
    Itself = 0x00000001,
    Members = 0x00000002,
    WithMembers = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_ImplicitUseTargetFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_ImplicitUseTargetFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ImplicitUseTargetFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImplicitUseTargetFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ImplicitUseTargetFlags__Enum_FWDDECL)
#include <Modloader/app/structs/ImplicitUseTargetFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ImplicitUseTargetFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
