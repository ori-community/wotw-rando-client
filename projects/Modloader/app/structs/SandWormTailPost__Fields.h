#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormTailPost__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormTailPost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormTailPost__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SandWormTailPost__Fields_DEFINED
struct List_1_UnityEngine_Transform_;
struct SnakeSolver;
struct SandWormEntity;
struct SandWormTailPost__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Transform_* RevesedTailSegments;
    struct SnakeSolver* SnakeSolver;
    struct SandWormEntity* SandWorm;
    float TailFlapMaxAnge;
    float TailFlapFrequency;
    float m_time;
    struct Vector3 PositionOffset;
    bool UseLocalParent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormTailPost__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormTailPost__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/SandWormEntity.h>
#include <Modloader/app/structs/SnakeSolver.h>
#endif
#undef IL2CPP_STRUCT_SandWormTailPost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormTailPost__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormTailPost__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormTailPost__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormTailPost__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
