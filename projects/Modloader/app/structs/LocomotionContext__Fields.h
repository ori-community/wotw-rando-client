#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionContext__Fields_DEFINED)
#define IL2CPP_STRUCT_LocomotionContext__Fields_DEFINED
struct Locomotion;
struct __declspec(align(8)) LocomotionContext__Fields {
    struct Locomotion* Locomotion;
};
#endif
#if !defined(IL2CPP_STRUCT_LocomotionContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionContext__Fields_FWDDECL
#include <Modloader/app/structs/Locomotion.h>
#endif
#undef IL2CPP_STRUCT_LocomotionContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionContext__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
