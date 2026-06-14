#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleDamageCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleDamageCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleDamageCondition_DEFINED)
#include <Modloader/app/structs/TurtleDamageCondition__Fields.h>
#if defined(IL2CPP_STRUCT_TurtleDamageCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_TurtleDamageCondition_DEFINED
struct TurtleDamageCondition__Class;
struct TurtleDamageCondition {
    struct TurtleDamageCondition__Class* klass;
    MonitorData* monitor;
    struct TurtleDamageCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleDamageCondition_FWDDECL)
#define IL2CPP_STRUCT_TurtleDamageCondition_FWDDECL
#include <Modloader/app/structs/TurtleDamageCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_TurtleDamageCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleDamageCondition_DEFINED) && !defined(IL2CPP_STRUCT_TurtleDamageCondition_FWDDECL)
#include <Modloader/app/structs/TurtleDamageCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleDamageCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
