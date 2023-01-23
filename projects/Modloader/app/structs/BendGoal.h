#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BendGoal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BendGoal_INITIALIZING
#if !defined(IL2CPP_STRUCT_BendGoal_DEFINED)
#include <Modloader/app/structs/BendGoal__Fields.h>
#if defined(IL2CPP_STRUCT_BendGoal__Fields_DEFINED)
#define IL2CPP_STRUCT_BendGoal_DEFINED
struct BendGoal__Class;
struct BendGoal {
    struct BendGoal__Class* klass;
    MonitorData* monitor;
    struct BendGoal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BendGoal_FWDDECL)
#define IL2CPP_STRUCT_BendGoal_FWDDECL
#include <Modloader/app/structs/BendGoal__Class.h>
#endif
#undef IL2CPP_STRUCT_BendGoal_INITIALIZING
#if !defined(IL2CPP_STRUCT_BendGoal_DEFINED) && !defined(IL2CPP_STRUCT_BendGoal_FWDDECL)
#include <Modloader/app/structs/BendGoal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BendGoal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
