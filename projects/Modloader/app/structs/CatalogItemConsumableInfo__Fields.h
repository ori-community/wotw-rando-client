#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatalogItemConsumableInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatalogItemConsumableInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItemConsumableInfo__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_UInt32__DEFINED)
#define IL2CPP_STRUCT_CatalogItemConsumableInfo__Fields_DEFINED
struct String;
struct __declspec(align(8)) CatalogItemConsumableInfo__Fields {
    struct Nullable_1_UInt32_ UsageCount;
    struct Nullable_1_UInt32_ UsagePeriod;
    struct String* UsagePeriodGroup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatalogItemConsumableInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_CatalogItemConsumableInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CatalogItemConsumableInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItemConsumableInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CatalogItemConsumableInfo__Fields_FWDDECL)
#include <Modloader/app/structs/CatalogItemConsumableInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatalogItemConsumableInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
