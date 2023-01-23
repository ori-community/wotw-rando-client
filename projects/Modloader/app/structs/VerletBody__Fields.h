#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBody__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VerletBody__Fields_DEFINED
struct List_1_Moon_VerletBody_Point_;
struct List_1_Moon_VerletBody_Link_;
struct List_1_Moon_VerletBody_AngularContraint_;
struct __declspec(align(8)) VerletBody__Fields {
    struct List_1_Moon_VerletBody_Point_* Points;
    struct List_1_Moon_VerletBody_Link_* Links;
    struct List_1_Moon_VerletBody_AngularContraint_* AngularConstraints;
    int32_t LinksAccuracy;
    struct Vector3 Gravity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletBody__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletBody__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_VerletBody_AngularContraint_.h>
#include <Modloader/app/structs/List_1_Moon_VerletBody_Link_.h>
#include <Modloader/app/structs/List_1_Moon_VerletBody_Point_.h>
#endif
#undef IL2CPP_STRUCT_VerletBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletBody__Fields_FWDDECL)
#include <Modloader/app/structs/VerletBody__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBody__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
