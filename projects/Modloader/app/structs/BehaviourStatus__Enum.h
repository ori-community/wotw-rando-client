#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourStatus__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED
enum class BehaviourStatus__Enum : int32_t {
    Running = 0x00000000,
    Success = 0x00000001,
    Failure = 0x00000002,
    Blocking = 0x00000003,
    Resting = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_BehaviourStatus__Enum_FWDDECL)
#define IL2CPP_STRUCT_BehaviourStatus__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BehaviourStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourStatus__Enum_FWDDECL)
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
