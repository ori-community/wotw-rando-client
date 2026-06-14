#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Behavior_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Behavior_INITIALIZING
#if !defined(IL2CPP_STRUCT_Behavior_DEFINED)
#include <Modloader/app/structs/Behavior__Fields.h>
#if defined(IL2CPP_STRUCT_Behavior__Fields_DEFINED)
#define IL2CPP_STRUCT_Behavior_DEFINED
struct Behavior__Class;
struct Behavior {
    struct Behavior__Class* klass;
    MonitorData* monitor;
    struct Behavior__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Behavior_FWDDECL)
#define IL2CPP_STRUCT_Behavior_FWDDECL
#include <Modloader/app/structs/Behavior__Class.h>
#endif
#undef IL2CPP_STRUCT_Behavior_INITIALIZING
#if !defined(IL2CPP_STRUCT_Behavior_DEFINED) && !defined(IL2CPP_STRUCT_Behavior_FWDDECL)
#include <Modloader/app/structs/Behavior.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Behavior.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
