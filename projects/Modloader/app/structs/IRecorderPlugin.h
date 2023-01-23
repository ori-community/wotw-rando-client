#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRecorderPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRecorderPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRecorderPlugin_DEFINED)
#define IL2CPP_STRUCT_IRecorderPlugin_DEFINED
struct IRecorderPlugin__Class;
struct IRecorderPlugin {
    struct IRecorderPlugin__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRecorderPlugin_FWDDECL)
#define IL2CPP_STRUCT_IRecorderPlugin_FWDDECL
#include <Modloader/app/structs/IRecorderPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_IRecorderPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRecorderPlugin_DEFINED) && !defined(IL2CPP_STRUCT_IRecorderPlugin_FWDDECL)
#include <Modloader/app/structs/IRecorderPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRecorderPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
