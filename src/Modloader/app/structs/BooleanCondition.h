#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BooleanCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BooleanCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanCondition_DEFINED)
#include <Modloader/app/structs/BooleanCondition__Fields.h>
#if defined(IL2CPP_STRUCT_BooleanCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_BooleanCondition_DEFINED
struct BooleanCondition__Class;
struct BooleanCondition {
    struct BooleanCondition__Class* klass;
    MonitorData* monitor;
    struct BooleanCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BooleanCondition_FWDDECL)
#define IL2CPP_STRUCT_BooleanCondition_FWDDECL
#include <Modloader/app/structs/BooleanCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_BooleanCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanCondition_DEFINED) && !defined(IL2CPP_STRUCT_BooleanCondition_FWDDECL)
#include <Modloader/app/structs/BooleanCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BooleanCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
