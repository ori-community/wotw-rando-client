#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrounderFBBIK__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrounderFBBIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderFBBIK__Fields_DEFINED)
#include <Modloader/app/structs/Grounder__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Grounder__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GrounderFBBIK__Fields_DEFINED
struct FullBodyBipedIK;
struct GrounderFBBIK_SpineEffector__Array;
struct Transform__Array;
struct GrounderFBBIK__Fields {
    struct Grounder__Fields _;
    struct FullBodyBipedIK* ik;
    float spineBend;
    float spineSpeed;
    struct GrounderFBBIK_SpineEffector__Array* spine;
    struct Transform__Array* feet;
    struct Vector3 spineOffset;
    bool firstSolve;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrounderFBBIK__Fields_FWDDECL)
#define IL2CPP_STRUCT_GrounderFBBIK__Fields_FWDDECL
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/GrounderFBBIK_SpineEffector__Array.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_GrounderFBBIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderFBBIK__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GrounderFBBIK__Fields_FWDDECL)
#include <Modloader/app/structs/GrounderFBBIK__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrounderFBBIK__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
