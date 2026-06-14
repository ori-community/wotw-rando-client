#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RangeConditionHeaderValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RangeConditionHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeConditionHeaderValue__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTimeOffset_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTimeOffset__DEFINED)
#define IL2CPP_STRUCT_RangeConditionHeaderValue__Fields_DEFINED
struct EntityTagHeaderValue;
struct __declspec(align(8)) RangeConditionHeaderValue__Fields {
    struct Nullable_1_DateTimeOffset_ _Date_k__BackingField;
    struct EntityTagHeaderValue* _EntityTag_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RangeConditionHeaderValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_RangeConditionHeaderValue__Fields_FWDDECL
#include <Modloader/app/structs/EntityTagHeaderValue.h>
#endif
#undef IL2CPP_STRUCT_RangeConditionHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeConditionHeaderValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RangeConditionHeaderValue__Fields_FWDDECL)
#include <Modloader/app/structs/RangeConditionHeaderValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RangeConditionHeaderValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
