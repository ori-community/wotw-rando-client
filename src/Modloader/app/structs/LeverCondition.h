#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeverCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeverCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverCondition_DEFINED)
#include <Modloader/app/structs/LeverCondition__Fields.h>
#if defined(IL2CPP_STRUCT_LeverCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_LeverCondition_DEFINED
struct LeverCondition__Class;
struct LeverCondition {
    struct LeverCondition__Class* klass;
    MonitorData* monitor;
    struct LeverCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeverCondition_FWDDECL)
#define IL2CPP_STRUCT_LeverCondition_FWDDECL
#include <Modloader/app/structs/LeverCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_LeverCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverCondition_DEFINED) && !defined(IL2CPP_STRUCT_LeverCondition_FWDDECL)
#include <Modloader/app/structs/LeverCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeverCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
