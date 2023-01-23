#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateCondition_DEFINED)
#include <Modloader/app/structs/StateCondition__Fields.h>
#if defined(IL2CPP_STRUCT_StateCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_StateCondition_DEFINED
struct StateCondition__Class;
struct StateCondition {
    struct StateCondition__Class* klass;
    MonitorData* monitor;
    struct StateCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateCondition_FWDDECL)
#define IL2CPP_STRUCT_StateCondition_FWDDECL
#include <Modloader/app/structs/StateCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_StateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateCondition_DEFINED) && !defined(IL2CPP_STRUCT_StateCondition_FWDDECL)
#include <Modloader/app/structs/StateCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
