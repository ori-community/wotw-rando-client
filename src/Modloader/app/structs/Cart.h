#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cart_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cart_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cart_DEFINED)
#include <Modloader/app/structs/Cart__Fields.h>
#if defined(IL2CPP_STRUCT_Cart__Fields_DEFINED)
#define IL2CPP_STRUCT_Cart_DEFINED
struct Cart__Class;
struct Cart {
    struct Cart__Class* klass;
    MonitorData* monitor;
    struct Cart__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Cart_FWDDECL)
#define IL2CPP_STRUCT_Cart_FWDDECL
#include <Modloader/app/structs/Cart__Class.h>
#endif
#undef IL2CPP_STRUCT_Cart_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cart_DEFINED) && !defined(IL2CPP_STRUCT_Cart_FWDDECL)
#include <Modloader/app/structs/Cart.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cart.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
