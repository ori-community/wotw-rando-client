#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntCondition_DEFINED)
#include <Modloader/app/structs/IntCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IntCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IntCondition_DEFINED
struct IntCondition__Class;
struct IntCondition {
    struct IntCondition__Class* klass;
    MonitorData* monitor;
    struct IntCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntCondition_FWDDECL)
#define IL2CPP_STRUCT_IntCondition_FWDDECL
#include <Modloader/app/structs/IntCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IntCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntCondition_DEFINED) && !defined(IL2CPP_STRUCT_IntCondition_FWDDECL)
#include <Modloader/app/structs/IntCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
