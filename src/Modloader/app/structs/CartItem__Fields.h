#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartItem__Fields_DEFINED)
#define IL2CPP_STRUCT_CartItem__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_System_UInt32_;
struct __declspec(align(8)) CartItem__Fields {
    struct String* Description;
    struct String* DisplayName;
    struct String* ItemClass;
    struct String* ItemId;
    struct String* ItemInstanceId;
    struct Dictionary_2_System_String_System_UInt32_* RealCurrencyPrices;
    struct Dictionary_2_System_String_System_UInt32_* VCAmount;
    struct Dictionary_2_System_String_System_UInt32_* VirtualCurrencyPrices;
};
#endif
#if !defined(IL2CPP_STRUCT_CartItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartItem__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_UInt32_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CartItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartItem__Fields_FWDDECL)
#include <Modloader/app/structs/CartItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
