#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatCondition_DEFINED)
#include <Modloader/app/structs/FloatCondition__Fields.h>
#if defined(IL2CPP_STRUCT_FloatCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatCondition_DEFINED
struct FloatCondition__Class;
struct FloatCondition {
    struct FloatCondition__Class* klass;
    MonitorData* monitor;
    struct FloatCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatCondition_FWDDECL)
#define IL2CPP_STRUCT_FloatCondition_FWDDECL
#include <Modloader/app/structs/FloatCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatCondition_DEFINED) && !defined(IL2CPP_STRUCT_FloatCondition_FWDDECL)
#include <Modloader/app/structs/FloatCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
