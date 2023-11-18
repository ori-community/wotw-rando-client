#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CheckoutException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CheckoutException_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckoutException_DEFINED)
#include <Modloader/app/structs/CheckoutException__Fields.h>
#if defined(IL2CPP_STRUCT_CheckoutException__Fields_DEFINED)
#define IL2CPP_STRUCT_CheckoutException_DEFINED
struct CheckoutException__Class;
struct CheckoutException {
    struct CheckoutException__Class* klass;
    MonitorData* monitor;
    struct CheckoutException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CheckoutException_FWDDECL)
#define IL2CPP_STRUCT_CheckoutException_FWDDECL
#include <Modloader/app/structs/CheckoutException__Class.h>
#endif
#undef IL2CPP_STRUCT_CheckoutException_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckoutException_DEFINED) && !defined(IL2CPP_STRUCT_CheckoutException_FWDDECL)
#include <Modloader/app/structs/CheckoutException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CheckoutException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
