#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatValueWithCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatValueWithCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatValueWithCondition_DEFINED)
#include <Modloader/app/structs/FloatValueWithCondition__Fields.h>
#if defined(IL2CPP_STRUCT_FloatValueWithCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatValueWithCondition_DEFINED
struct FloatValueWithCondition__Class;
struct FloatValueWithCondition {
    struct FloatValueWithCondition__Class* klass;
    MonitorData* monitor;
    struct FloatValueWithCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatValueWithCondition_FWDDECL)
#define IL2CPP_STRUCT_FloatValueWithCondition_FWDDECL
#include <Modloader/app/structs/FloatValueWithCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatValueWithCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatValueWithCondition_DEFINED) && !defined(IL2CPP_STRUCT_FloatValueWithCondition_FWDDECL)
#include <Modloader/app/structs/FloatValueWithCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatValueWithCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
