#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PaymentOption_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PaymentOption_INITIALIZING
#if !defined(IL2CPP_STRUCT_PaymentOption_DEFINED)
#include <Modloader/app/structs/PaymentOption__Fields.h>
#if defined(IL2CPP_STRUCT_PaymentOption__Fields_DEFINED)
#define IL2CPP_STRUCT_PaymentOption_DEFINED
struct PaymentOption__Class;
struct PaymentOption {
    struct PaymentOption__Class* klass;
    MonitorData* monitor;
    struct PaymentOption__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PaymentOption_FWDDECL)
#define IL2CPP_STRUCT_PaymentOption_FWDDECL
#include <Modloader/app/structs/PaymentOption__Class.h>
#endif
#undef IL2CPP_STRUCT_PaymentOption_INITIALIZING
#if !defined(IL2CPP_STRUCT_PaymentOption_DEFINED) && !defined(IL2CPP_STRUCT_PaymentOption_FWDDECL)
#include <Modloader/app/structs/PaymentOption.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PaymentOption.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
