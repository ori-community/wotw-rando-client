#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMenuTab_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMenuTab_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMenuTab_DEFINED)
#define IL2CPP_STRUCT_IMenuTab_DEFINED
struct IMenuTab__Class;
struct IMenuTab {
    struct IMenuTab__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMenuTab_FWDDECL)
#define IL2CPP_STRUCT_IMenuTab_FWDDECL
#include <Modloader/app/structs/IMenuTab__Class.h>
#endif
#undef IL2CPP_STRUCT_IMenuTab_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMenuTab_DEFINED) && !defined(IL2CPP_STRUCT_IMenuTab_FWDDECL)
#include <Modloader/app/structs/IMenuTab.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMenuTab.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
