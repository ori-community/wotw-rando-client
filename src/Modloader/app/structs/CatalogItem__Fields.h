#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatalogItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatalogItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItem__Fields_DEFINED)
#define IL2CPP_STRUCT_CatalogItem__Fields_DEFINED
struct CatalogItemBundleInfo;
struct String;
struct CatalogItemConsumableInfo;
struct CatalogItemContainerInfo;
struct Dictionary_2_System_String_System_UInt32_;
struct List_1_System_String_;
struct __declspec(align(8)) CatalogItem__Fields {
    struct CatalogItemBundleInfo* Bundle;
    bool CanBecomeCharacter;
    struct String* CatalogVersion;
    struct CatalogItemConsumableInfo* Consumable;
    struct CatalogItemContainerInfo* Container;
    struct String* CustomData;
    struct String* Description;
    struct String* DisplayName;
    int32_t InitialLimitedEditionCount;
    bool IsLimitedEdition;
    bool IsStackable;
    bool IsTradable;
    struct String* ItemClass;
    struct String* ItemId;
    struct String* ItemImageUrl;
    struct Dictionary_2_System_String_System_UInt32_* RealCurrencyPrices;
    struct List_1_System_String_* Tags;
    struct Dictionary_2_System_String_System_UInt32_* VirtualCurrencyPrices;
};
#endif
#if !defined(IL2CPP_STRUCT_CatalogItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_CatalogItem__Fields_FWDDECL
#include <Modloader/app/structs/CatalogItemBundleInfo.h>
#include <Modloader/app/structs/CatalogItemConsumableInfo.h>
#include <Modloader/app/structs/CatalogItemContainerInfo.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_UInt32_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CatalogItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatalogItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CatalogItem__Fields_FWDDECL)
#include <Modloader/app/structs/CatalogItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatalogItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
