#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBIKBendGoal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBIKBendGoal_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKBendGoal_DEFINED)
#include <Modloader/app/structs/FBIKBendGoal__Fields.h>
#if defined(IL2CPP_STRUCT_FBIKBendGoal__Fields_DEFINED)
#define IL2CPP_STRUCT_FBIKBendGoal_DEFINED
struct FBIKBendGoal__Class;
struct FBIKBendGoal {
    struct FBIKBendGoal__Class* klass;
    MonitorData* monitor;
    struct FBIKBendGoal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FBIKBendGoal_FWDDECL)
#define IL2CPP_STRUCT_FBIKBendGoal_FWDDECL
#include <Modloader/app/structs/FBIKBendGoal__Class.h>
#endif
#undef IL2CPP_STRUCT_FBIKBendGoal_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKBendGoal_DEFINED) && !defined(IL2CPP_STRUCT_FBIKBendGoal_FWDDECL)
#include <Modloader/app/structs/FBIKBendGoal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBIKBendGoal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
