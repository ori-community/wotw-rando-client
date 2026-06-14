#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MD2Managed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MD2Managed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD2Managed_DEFINED)
#include <Modloader/app/structs/MD2Managed__Fields.h>
#if defined(IL2CPP_STRUCT_MD2Managed__Fields_DEFINED)
#define IL2CPP_STRUCT_MD2Managed_DEFINED
struct MD2Managed__Class;
struct MD2Managed {
    struct MD2Managed__Class* klass;
    MonitorData* monitor;
    struct MD2Managed__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MD2Managed_FWDDECL)
#define IL2CPP_STRUCT_MD2Managed_FWDDECL
#include <Modloader/app/structs/MD2Managed__Class.h>
#endif
#undef IL2CPP_STRUCT_MD2Managed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD2Managed_DEFINED) && !defined(IL2CPP_STRUCT_MD2Managed_FWDDECL)
#include <Modloader/app/structs/MD2Managed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MD2Managed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
