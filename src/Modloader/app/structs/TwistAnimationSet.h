#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TwistAnimationSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TwistAnimationSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_TwistAnimationSet_DEFINED)
#include <Modloader/app/structs/TwistAnimationSet__Fields.h>
#if defined(IL2CPP_STRUCT_TwistAnimationSet__Fields_DEFINED)
#define IL2CPP_STRUCT_TwistAnimationSet_DEFINED
struct TwistAnimationSet__Class;
struct TwistAnimationSet {
    struct TwistAnimationSet__Class* klass;
    MonitorData* monitor;
    struct TwistAnimationSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TwistAnimationSet_FWDDECL)
#define IL2CPP_STRUCT_TwistAnimationSet_FWDDECL
#include <Modloader/app/structs/TwistAnimationSet__Class.h>
#endif
#undef IL2CPP_STRUCT_TwistAnimationSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_TwistAnimationSet_DEFINED) && !defined(IL2CPP_STRUCT_TwistAnimationSet_FWDDECL)
#include <Modloader/app/structs/TwistAnimationSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TwistAnimationSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
