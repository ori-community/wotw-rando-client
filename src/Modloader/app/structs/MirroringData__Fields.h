#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MirroringData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MirroringData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirroringData__Fields_DEFINED)
#include <Modloader/app/structs/MirroringData_Axis__Enum.h>
#if defined(IL2CPP_STRUCT_MirroringData_Axis__Enum_DEFINED)
#define IL2CPP_STRUCT_MirroringData__Fields_DEFINED
struct String;
struct AnimationCurve;
struct __declspec(align(8)) MirroringData__Fields {
    struct String* jointName;
    struct String* mirrorName;
    struct String* path;
    struct String* mirrorPath;
    struct AnimationCurve* curve;
    struct AnimationCurve* mirrorCurve;
    MirroringData_Axis__Enum axis;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MirroringData__Fields_FWDDECL)
#define IL2CPP_STRUCT_MirroringData__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MirroringData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirroringData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MirroringData__Fields_FWDDECL)
#include <Modloader/app/structs/MirroringData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MirroringData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
