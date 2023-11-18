#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tests_DoMovementTests_d_15__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tests_DoMovementTests_d_15__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_DoMovementTests_d_15__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_Tests_DoMovementTests_d_15__Fields_DEFINED
struct Object;
struct String;
struct List_1_UnityEngine_Vector3_;
struct List_1_UnityEngine_Quaternion_;
struct List_1_UnityEngine_Transform_;
struct PerfTestTimer;
struct __declspec(align(8)) Tests_DoMovementTests_d_15__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    struct String* baseTestName;
    struct List_1_UnityEngine_Vector3_* positions;
    struct List_1_UnityEngine_Quaternion_* rotations;
    struct List_1_UnityEngine_Vector3_* scales;
    struct List_1_UnityEngine_Transform_* transformsToMove;
    struct PerfTestTimer* _testTimer_5__2;
    struct PerfTestTimer* _frameTimeTestTimer_5__3;
    bool _movePos_5__4;
    bool _moveRot_5__5;
    bool _moveScale_5__6;
    int32_t _objectIndex_5__7;
    struct Vector3 _oldPos_5__8;
    struct Quaternion _oldRot_5__9;
    struct Vector3 _oldScale_5__10;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tests_DoMovementTests_d_15__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tests_DoMovementTests_d_15__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PerfTestTimer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Tests_DoMovementTests_d_15__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_DoMovementTests_d_15__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tests_DoMovementTests_d_15__Fields_FWDDECL)
#include <Modloader/app/structs/Tests_DoMovementTests_d_15__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tests_DoMovementTests_d_15__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
