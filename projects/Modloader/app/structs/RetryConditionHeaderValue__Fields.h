#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RetryConditionHeaderValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RetryConditionHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RetryConditionHeaderValue__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTimeOffset_.h>
#include <Modloader/app/structs/Nullable_1_TimeSpan_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTimeOffset__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_TimeSpan__DEFINED)
#define IL2CPP_STRUCT_RetryConditionHeaderValue__Fields_DEFINED
struct __declspec(align(8)) RetryConditionHeaderValue__Fields {
    struct Nullable_1_DateTimeOffset_ _Date_k__BackingField;
    struct Nullable_1_TimeSpan_ _Delta_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RetryConditionHeaderValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_RetryConditionHeaderValue__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RetryConditionHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RetryConditionHeaderValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RetryConditionHeaderValue__Fields_FWDDECL)
#include <Modloader/app/structs/RetryConditionHeaderValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RetryConditionHeaderValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
