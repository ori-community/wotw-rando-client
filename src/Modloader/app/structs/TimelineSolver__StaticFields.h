#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineSolver__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineSolver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineSolver__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TimelineSolver__StaticFields_DEFINED
struct Dictionary_2_System_UInt32_System_Single_;
struct FastHashSet_1_System_UInt32_;
struct IDisposable;
struct TimelineSolver__StaticFields {
    bool AllowEvaluate;
    bool DetectInfiniteLoops;
    bool AllowCache;
    struct Dictionary_2_System_UInt32_System_Single_* m_cache;
    struct FastHashSet_1_System_UInt32_* m_loopCheck;
    struct IDisposable* m_disposable;
};
#endif
#if !defined(IL2CPP_STRUCT_TimelineSolver__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TimelineSolver__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_UInt32_System_Single_.h>
#include <Modloader/app/structs/FastHashSet_1_System_UInt32_.h>
#include <Modloader/app/structs/IDisposable.h>
#endif
#undef IL2CPP_STRUCT_TimelineSolver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineSolver__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineSolver__StaticFields_FWDDECL)
#include <Modloader/app/structs/TimelineSolver__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineSolver__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
