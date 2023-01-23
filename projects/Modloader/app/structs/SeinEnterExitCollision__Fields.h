#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEnterExitCollision__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEnterExitCollision__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEnterExitCollision__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinEnterExitCollision__Fields_DEFINED
struct MoonTimeline;
struct Condition_1;
struct SeinEnterExitCollision__Fields {
    struct MonoBehaviour__Fields _;
    bool OnTrigger;
    bool OnCollision;
    struct MoonTimeline* OnEnterTimeline;
    struct Condition_1* OnEnterCondition;
    struct MoonTimeline* OnExitTimeline;
    struct Condition_1* OnExitCondition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinEnterExitCollision__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinEnterExitCollision__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SeinEnterExitCollision__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEnterExitCollision__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinEnterExitCollision__Fields_FWDDECL)
#include <Modloader/app/structs/SeinEnterExitCollision__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEnterExitCollision__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
