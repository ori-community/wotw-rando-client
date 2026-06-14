#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPuppetBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPuppetBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPuppetBase_DEFINED)
#define IL2CPP_STRUCT_IPuppetBase_DEFINED
struct IPuppetBase__Class;
struct IPuppetBase {
    struct IPuppetBase__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPuppetBase_FWDDECL)
#define IL2CPP_STRUCT_IPuppetBase_FWDDECL
#include <Modloader/app/structs/IPuppetBase__Class.h>
#endif
#undef IL2CPP_STRUCT_IPuppetBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPuppetBase_DEFINED) && !defined(IL2CPP_STRUCT_IPuppetBase_FWDDECL)
#include <Modloader/app/structs/IPuppetBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPuppetBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
