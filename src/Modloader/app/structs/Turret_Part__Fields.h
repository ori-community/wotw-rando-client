#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Turret_Part__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Turret_Part__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Turret_Part__Fields_DEFINED)
#define IL2CPP_STRUCT_Turret_Part__Fields_DEFINED
struct Transform;
struct RotationLimit;
struct __declspec(align(8)) Turret_Part__Fields {
    struct Transform* transform;
    struct RotationLimit* rotationLimit;
};
#endif
#if !defined(IL2CPP_STRUCT_Turret_Part__Fields_FWDDECL)
#define IL2CPP_STRUCT_Turret_Part__Fields_FWDDECL
#include <Modloader/app/structs/RotationLimit.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Turret_Part__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Turret_Part__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Turret_Part__Fields_FWDDECL)
#include <Modloader/app/structs/Turret_Part__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Turret_Part__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
