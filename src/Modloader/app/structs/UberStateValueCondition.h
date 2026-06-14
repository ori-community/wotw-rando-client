#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateValueCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateValueCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateValueCondition_DEFINED)
#include <Modloader/app/structs/UberStateValueCondition__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateValueCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateValueCondition_DEFINED
struct UberStateValueCondition__Class;
struct UberStateValueCondition {
    struct UberStateValueCondition__Class* klass;
    MonitorData* monitor;
    struct UberStateValueCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateValueCondition_FWDDECL)
#define IL2CPP_STRUCT_UberStateValueCondition_FWDDECL
#include <Modloader/app/structs/UberStateValueCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateValueCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateValueCondition_DEFINED) && !defined(IL2CPP_STRUCT_UberStateValueCondition_FWDDECL)
#include <Modloader/app/structs/UberStateValueCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateValueCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
