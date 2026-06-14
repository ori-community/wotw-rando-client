#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AimBoxing__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AimBoxing__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimBoxing__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AimBoxing__Fields_DEFINED
struct AimIK;
struct Transform;
struct AimBoxing__Fields {
    struct MonoBehaviour__Fields _;
    struct AimIK* aimIK;
    struct Transform* pin;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AimBoxing__Fields_FWDDECL)
#define IL2CPP_STRUCT_AimBoxing__Fields_FWDDECL
#include <Modloader/app/structs/AimIK.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AimBoxing__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimBoxing__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AimBoxing__Fields_FWDDECL)
#include <Modloader/app/structs/AimBoxing__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AimBoxing__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
