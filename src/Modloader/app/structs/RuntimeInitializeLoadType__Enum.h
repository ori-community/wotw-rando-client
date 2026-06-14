#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeInitializeLoadType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeInitializeLoadType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeInitializeLoadType__Enum_DEFINED)
#define IL2CPP_STRUCT_RuntimeInitializeLoadType__Enum_DEFINED
enum class RuntimeInitializeLoadType__Enum : int32_t {
    AfterSceneLoad = 0x00000000,
    BeforeSceneLoad = 0x00000001,
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeInitializeLoadType__Enum_FWDDECL)
#define IL2CPP_STRUCT_RuntimeInitializeLoadType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RuntimeInitializeLoadType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeInitializeLoadType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeInitializeLoadType__Enum_FWDDECL)
#include <Modloader/app/structs/RuntimeInitializeLoadType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeInitializeLoadType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
