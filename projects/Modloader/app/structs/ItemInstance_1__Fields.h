#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ItemInstance_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ItemInstance_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemInstance_1__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_ItemInstance_1__Fields_DEFINED
struct String;
struct List_1_System_String_;
struct Dictionary_2_System_String_System_String_;
struct __declspec(align(8)) ItemInstance_1__Fields {
    struct String* Annotation;
    struct List_1_System_String_* BundleContents;
    struct String* BundleParent;
    struct String* CatalogVersion;
    struct Dictionary_2_System_String_System_String_* CustomData;
    struct String* DisplayName;
    struct Nullable_1_DateTime_ Expiration;
    struct String* ItemClass;
    struct String* ItemId;
    struct String* ItemInstanceId;
    struct Nullable_1_DateTime_ PurchaseDate;
    struct Nullable_1_Int32_ RemainingUses;
    struct String* UnitCurrency;
    uint32_t UnitPrice;
    struct Nullable_1_Int32_ UsesIncrementedBy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ItemInstance_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_ItemInstance_1__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ItemInstance_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemInstance_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ItemInstance_1__Fields_FWDDECL)
#include <Modloader/app/structs/ItemInstance_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ItemInstance_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
