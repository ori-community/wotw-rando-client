#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDebugMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDebugMenuItem_DEFINED)
#define IL2CPP_STRUCT_IDebugMenuItem_DEFINED
struct IDebugMenuItem__Class;
struct IDebugMenuItem {
    struct IDebugMenuItem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDebugMenuItem_FWDDECL)
#define IL2CPP_STRUCT_IDebugMenuItem_FWDDECL
#include <Modloader/app/structs/IDebugMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_IDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDebugMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_IDebugMenuItem_FWDDECL)
#include <Modloader/app/structs/IDebugMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDebugMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
