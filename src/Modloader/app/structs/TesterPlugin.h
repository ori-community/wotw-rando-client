#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TesterPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TesterPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_TesterPlugin_DEFINED)
#include <Modloader/app/structs/TesterPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_TesterPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_TesterPlugin_DEFINED
struct TesterPlugin__Class;
struct TesterPlugin {
    struct TesterPlugin__Class* klass;
    MonitorData* monitor;
    struct TesterPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TesterPlugin_FWDDECL)
#define IL2CPP_STRUCT_TesterPlugin_FWDDECL
#include <Modloader/app/structs/TesterPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_TesterPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_TesterPlugin_DEFINED) && !defined(IL2CPP_STRUCT_TesterPlugin_FWDDECL)
#include <Modloader/app/structs/TesterPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TesterPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
