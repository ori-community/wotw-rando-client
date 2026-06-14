#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDeflater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDeflater_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDeflater_DEFINED)
#define IL2CPP_STRUCT_IDeflater_DEFINED
struct IDeflater__Class;
struct IDeflater {
    struct IDeflater__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDeflater_FWDDECL)
#define IL2CPP_STRUCT_IDeflater_FWDDECL
#include <Modloader/app/structs/IDeflater__Class.h>
#endif
#undef IL2CPP_STRUCT_IDeflater_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDeflater_DEFINED) && !defined(IL2CPP_STRUCT_IDeflater_FWDDECL)
#include <Modloader/app/structs/IDeflater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDeflater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
