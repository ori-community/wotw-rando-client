#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPlayFabPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPlayFabPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlayFabPlugin_DEFINED)
#define IL2CPP_STRUCT_IPlayFabPlugin_DEFINED
struct IPlayFabPlugin__Class;
struct IPlayFabPlugin {
    struct IPlayFabPlugin__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPlayFabPlugin_FWDDECL)
#define IL2CPP_STRUCT_IPlayFabPlugin_FWDDECL
#include <Modloader/app/structs/IPlayFabPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_IPlayFabPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlayFabPlugin_DEFINED) && !defined(IL2CPP_STRUCT_IPlayFabPlugin_FWDDECL)
#include <Modloader/app/structs/IPlayFabPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPlayFabPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
