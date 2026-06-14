#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TorchFirePedestal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TorchFirePedestal_INITIALIZING
#if !defined(IL2CPP_STRUCT_TorchFirePedestal_DEFINED)
#include <Modloader/app/structs/TorchFirePedestal__Fields.h>
#if defined(IL2CPP_STRUCT_TorchFirePedestal__Fields_DEFINED)
#define IL2CPP_STRUCT_TorchFirePedestal_DEFINED
struct TorchFirePedestal__Class;
struct TorchFirePedestal {
    struct TorchFirePedestal__Class* klass;
    MonitorData* monitor;
    struct TorchFirePedestal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TorchFirePedestal_FWDDECL)
#define IL2CPP_STRUCT_TorchFirePedestal_FWDDECL
#include <Modloader/app/structs/TorchFirePedestal__Class.h>
#endif
#undef IL2CPP_STRUCT_TorchFirePedestal_INITIALIZING
#if !defined(IL2CPP_STRUCT_TorchFirePedestal_DEFINED) && !defined(IL2CPP_STRUCT_TorchFirePedestal_FWDDECL)
#include <Modloader/app/structs/TorchFirePedestal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TorchFirePedestal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
