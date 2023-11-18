#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tests_SetupPosition_d_16__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tests_SetupPosition_d_16__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_SetupPosition_d_16__Fields_DEFINED)
#define IL2CPP_STRUCT_Tests_SetupPosition_d_16__Fields_DEFINED
struct Object;
struct List_1_UnityEngine_Transform_;
struct List_1_UnityEngine_Vector3_;
struct List_1_UnityEngine_Quaternion_;
struct __declspec(align(8)) Tests_SetupPosition_d_16__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    struct List_1_UnityEngine_Transform_* transformsToMove;
    struct List_1_UnityEngine_Vector3_* positions;
    struct List_1_UnityEngine_Quaternion_* rotations;
    struct List_1_UnityEngine_Vector3_* scales;
};
#endif
#if !defined(IL2CPP_STRUCT_Tests_SetupPosition_d_16__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tests_SetupPosition_d_16__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Tests_SetupPosition_d_16__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_SetupPosition_d_16__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tests_SetupPosition_d_16__Fields_FWDDECL)
#include <Modloader/app/structs/Tests_SetupPosition_d_16__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tests_SetupPosition_d_16__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
