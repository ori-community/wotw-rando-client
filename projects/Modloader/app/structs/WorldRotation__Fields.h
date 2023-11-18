#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldRotation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldRotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldRotation__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WorldRotation__Fields_DEFINED
struct WorldRotation__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 Rotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldRotation__Fields_FWDDECL)
#define IL2CPP_STRUCT_WorldRotation__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_WorldRotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldRotation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WorldRotation__Fields_FWDDECL)
#include <Modloader/app/structs/WorldRotation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldRotation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
