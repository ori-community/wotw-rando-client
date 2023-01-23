#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTester_DEFINED)
#include <Modloader/app/structs/AnimationTester__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationTester__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationTester_DEFINED
struct AnimationTester__Class;
struct AnimationTester {
    struct AnimationTester__Class* klass;
    MonitorData* monitor;
    struct AnimationTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationTester_FWDDECL)
#define IL2CPP_STRUCT_AnimationTester_FWDDECL
#include <Modloader/app/structs/AnimationTester__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTester_DEFINED) && !defined(IL2CPP_STRUCT_AnimationTester_FWDDECL)
#include <Modloader/app/structs/AnimationTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
