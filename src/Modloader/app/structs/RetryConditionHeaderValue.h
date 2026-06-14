#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RetryConditionHeaderValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RetryConditionHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_RetryConditionHeaderValue_DEFINED)
#include <Modloader/app/structs/RetryConditionHeaderValue__Fields.h>
#if defined(IL2CPP_STRUCT_RetryConditionHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_RetryConditionHeaderValue_DEFINED
struct RetryConditionHeaderValue__Class;
struct RetryConditionHeaderValue {
    struct RetryConditionHeaderValue__Class* klass;
    MonitorData* monitor;
    struct RetryConditionHeaderValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RetryConditionHeaderValue_FWDDECL)
#define IL2CPP_STRUCT_RetryConditionHeaderValue_FWDDECL
#include <Modloader/app/structs/RetryConditionHeaderValue__Class.h>
#endif
#undef IL2CPP_STRUCT_RetryConditionHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_RetryConditionHeaderValue_DEFINED) && !defined(IL2CPP_STRUCT_RetryConditionHeaderValue_FWDDECL)
#include <Modloader/app/structs/RetryConditionHeaderValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RetryConditionHeaderValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
