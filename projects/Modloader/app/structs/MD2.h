#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MD2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MD2_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD2_DEFINED)
#include <Modloader/app/structs/MD2__Fields.h>
#if defined(IL2CPP_STRUCT_MD2__Fields_DEFINED)
#define IL2CPP_STRUCT_MD2_DEFINED
struct MD2__Class;
struct MD2 {
    struct MD2__Class* klass;
    MonitorData* monitor;
    struct MD2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MD2_FWDDECL)
#define IL2CPP_STRUCT_MD2_FWDDECL
#include <Modloader/app/structs/MD2__Class.h>
#endif
#undef IL2CPP_STRUCT_MD2_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD2_DEFINED) && !defined(IL2CPP_STRUCT_MD2_FWDDECL)
#include <Modloader/app/structs/MD2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MD2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
