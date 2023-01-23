#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Blackboard_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Blackboard_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blackboard_DEFINED)
#include <Modloader/app/structs/Blackboard__Fields.h>
#if defined(IL2CPP_STRUCT_Blackboard__Fields_DEFINED)
#define IL2CPP_STRUCT_Blackboard_DEFINED
struct Blackboard__Class;
struct Blackboard {
    struct Blackboard__Class* klass;
    MonitorData* monitor;
    struct Blackboard__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Blackboard_FWDDECL)
#define IL2CPP_STRUCT_Blackboard_FWDDECL
#include <Modloader/app/structs/Blackboard__Class.h>
#endif
#undef IL2CPP_STRUCT_Blackboard_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blackboard_DEFINED) && !defined(IL2CPP_STRUCT_Blackboard_FWDDECL)
#include <Modloader/app/structs/Blackboard.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Blackboard.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
