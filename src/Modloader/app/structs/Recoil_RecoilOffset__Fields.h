#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Recoil_RecoilOffset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Recoil_RecoilOffset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recoil_RecoilOffset__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Recoil_RecoilOffset__Fields_DEFINED
struct Recoil_RecoilOffset_EffectorLink__Array;
struct __declspec(align(8)) Recoil_RecoilOffset__Fields {
    struct Vector3 offset;
    float additivity;
    float maxAdditiveOffsetMag;
    struct Recoil_RecoilOffset_EffectorLink__Array* effectorLinks;
    struct Vector3 additiveOffset;
    struct Vector3 lastOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Recoil_RecoilOffset__Fields_FWDDECL)
#define IL2CPP_STRUCT_Recoil_RecoilOffset__Fields_FWDDECL
#include <Modloader/app/structs/Recoil_RecoilOffset_EffectorLink__Array.h>
#endif
#undef IL2CPP_STRUCT_Recoil_RecoilOffset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recoil_RecoilOffset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Recoil_RecoilOffset__Fields_FWDDECL)
#include <Modloader/app/structs/Recoil_RecoilOffset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Recoil_RecoilOffset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
