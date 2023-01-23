#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomCondition_DEFINED)
#include <Modloader/app/structs/CustomCondition__Fields.h>
#if defined(IL2CPP_STRUCT_CustomCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomCondition_DEFINED
struct CustomCondition__Class;
struct CustomCondition {
    struct CustomCondition__Class* klass;
    MonitorData* monitor;
    struct CustomCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomCondition_FWDDECL)
#define IL2CPP_STRUCT_CustomCondition_FWDDECL
#include <Modloader/app/structs/CustomCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomCondition_DEFINED) && !defined(IL2CPP_STRUCT_CustomCondition_FWDDECL)
#include <Modloader/app/structs/CustomCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
