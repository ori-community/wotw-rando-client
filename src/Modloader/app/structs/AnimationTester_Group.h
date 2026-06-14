#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationTester_Group_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationTester_Group_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTester_Group_DEFINED)
#include <Modloader/app/structs/AnimationTester_Group__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationTester_Group__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationTester_Group_DEFINED
struct AnimationTester_Group__Class;
struct AnimationTester_Group {
    struct AnimationTester_Group__Class* klass;
    MonitorData* monitor;
    struct AnimationTester_Group__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationTester_Group_FWDDECL)
#define IL2CPP_STRUCT_AnimationTester_Group_FWDDECL
#include <Modloader/app/structs/AnimationTester_Group__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationTester_Group_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTester_Group_DEFINED) && !defined(IL2CPP_STRUCT_AnimationTester_Group_FWDDECL)
#include <Modloader/app/structs/AnimationTester_Group.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationTester_Group.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
