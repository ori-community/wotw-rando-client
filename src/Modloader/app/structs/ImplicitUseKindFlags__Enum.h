#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ImplicitUseKindFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ImplicitUseKindFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImplicitUseKindFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_ImplicitUseKindFlags__Enum_DEFINED
enum class ImplicitUseKindFlags__Enum : int32_t {
    Default = 0x00000007,
    Access = 0x00000001,
    Assign = 0x00000002,
    InstantiatedWithFixedConstructorSignature = 0x00000004,
    InstantiatedNoFixedConstructorSignature = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_ImplicitUseKindFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_ImplicitUseKindFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ImplicitUseKindFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImplicitUseKindFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ImplicitUseKindFlags__Enum_FWDDECL)
#include <Modloader/app/structs/ImplicitUseKindFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ImplicitUseKindFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
