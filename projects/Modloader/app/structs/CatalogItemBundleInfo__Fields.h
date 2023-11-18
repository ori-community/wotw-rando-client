#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatalogItemBundleInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatalogItemBundleInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItemBundleInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CatalogItemBundleInfo__Fields_DEFINED
struct List_1_System_String_;
struct Dictionary_2_System_String_System_UInt32_;
struct __declspec(align(8)) CatalogItemBundleInfo__Fields {
    struct List_1_System_String_* BundledItems;
    struct List_1_System_String_* BundledResultTables;
    struct Dictionary_2_System_String_System_UInt32_* BundledVirtualCurrencies;
};
#endif
#if !defined(IL2CPP_STRUCT_CatalogItemBundleInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_CatalogItemBundleInfo__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_UInt32_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_CatalogItemBundleInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItemBundleInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CatalogItemBundleInfo__Fields_FWDDECL)
#include <Modloader/app/structs/CatalogItemBundleInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatalogItemBundleInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
