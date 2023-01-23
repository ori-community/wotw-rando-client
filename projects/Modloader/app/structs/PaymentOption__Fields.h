#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PaymentOption__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PaymentOption__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PaymentOption__Fields_DEFINED)
#define IL2CPP_STRUCT_PaymentOption__Fields_DEFINED
struct String;
struct __declspec(align(8)) PaymentOption__Fields {
    struct String* Currency;
    uint32_t Price;
    struct String* ProviderName;
    uint32_t StoreCredit;
};
#endif
#if !defined(IL2CPP_STRUCT_PaymentOption__Fields_FWDDECL)
#define IL2CPP_STRUCT_PaymentOption__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PaymentOption__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PaymentOption__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PaymentOption__Fields_FWDDECL)
#include <Modloader/app/structs/PaymentOption__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PaymentOption__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
