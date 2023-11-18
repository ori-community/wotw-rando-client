#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoolCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoolCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoolCondition_DEFINED)
#include <Modloader/app/structs/BoolCondition__Fields.h>
#if defined(IL2CPP_STRUCT_BoolCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_BoolCondition_DEFINED
struct BoolCondition__Class;
struct BoolCondition {
    struct BoolCondition__Class* klass;
    MonitorData* monitor;
    struct BoolCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BoolCondition_FWDDECL)
#define IL2CPP_STRUCT_BoolCondition_FWDDECL
#include <Modloader/app/structs/BoolCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_BoolCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoolCondition_DEFINED) && !defined(IL2CPP_STRUCT_BoolCondition_FWDDECL)
#include <Modloader/app/structs/BoolCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoolCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
