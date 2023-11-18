#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISynchronizeInvoke_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISynchronizeInvoke_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISynchronizeInvoke_DEFINED)
#define IL2CPP_STRUCT_ISynchronizeInvoke_DEFINED
struct ISynchronizeInvoke__Class;
struct ISynchronizeInvoke {
    struct ISynchronizeInvoke__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISynchronizeInvoke_FWDDECL)
#define IL2CPP_STRUCT_ISynchronizeInvoke_FWDDECL
#include <Modloader/app/structs/ISynchronizeInvoke__Class.h>
#endif
#undef IL2CPP_STRUCT_ISynchronizeInvoke_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISynchronizeInvoke_DEFINED) && !defined(IL2CPP_STRUCT_ISynchronizeInvoke_FWDDECL)
#include <Modloader/app/structs/ISynchronizeInvoke.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISynchronizeInvoke.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
