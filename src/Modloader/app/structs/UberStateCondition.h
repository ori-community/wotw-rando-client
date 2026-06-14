#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateCondition_DEFINED)
#include <Modloader/app/structs/UberStateCondition__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateCondition_DEFINED
struct UberStateCondition__Class;
struct UberStateCondition {
    struct UberStateCondition__Class* klass;
    MonitorData* monitor;
    struct UberStateCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateCondition_FWDDECL)
#define IL2CPP_STRUCT_UberStateCondition_FWDDECL
#include <Modloader/app/structs/UberStateCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateCondition_DEFINED) && !defined(IL2CPP_STRUCT_UberStateCondition_FWDDECL)
#include <Modloader/app/structs/UberStateCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
