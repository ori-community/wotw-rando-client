#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDebugMenuExternalItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDebugMenuExternalItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDebugMenuExternalItem_DEFINED)
#define IL2CPP_STRUCT_IDebugMenuExternalItem_DEFINED
struct IDebugMenuExternalItem__Class;
struct IDebugMenuExternalItem {
    struct IDebugMenuExternalItem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDebugMenuExternalItem_FWDDECL)
#define IL2CPP_STRUCT_IDebugMenuExternalItem_FWDDECL
#include <Modloader/app/structs/IDebugMenuExternalItem__Class.h>
#endif
#undef IL2CPP_STRUCT_IDebugMenuExternalItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDebugMenuExternalItem_DEFINED) && !defined(IL2CPP_STRUCT_IDebugMenuExternalItem_FWDDECL)
#include <Modloader/app/structs/IDebugMenuExternalItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDebugMenuExternalItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
