#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StoreItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StoreItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreItem__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_UInt32__DEFINED)
#define IL2CPP_STRUCT_StoreItem__Fields_DEFINED
struct Object;
struct String;
struct Dictionary_2_System_String_System_UInt32_;
struct __declspec(align(8)) StoreItem__Fields {
    struct Object* CustomData;
    struct Nullable_1_UInt32_ DisplayPosition;
    struct String* ItemId;
    struct Dictionary_2_System_String_System_UInt32_* RealCurrencyPrices;
    struct Dictionary_2_System_String_System_UInt32_* VirtualCurrencyPrices;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StoreItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_StoreItem__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_UInt32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StoreItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StoreItem__Fields_FWDDECL)
#include <Modloader/app/structs/StoreItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StoreItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
