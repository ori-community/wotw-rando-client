#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderMessagePlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderMessagePlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderMessagePlugin_DEFINED)
#include <Modloader/app/structs/RecorderMessagePlugin__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderMessagePlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderMessagePlugin_DEFINED
struct RecorderMessagePlugin__Class;
struct RecorderMessagePlugin {
    struct RecorderMessagePlugin__Class* klass;
    MonitorData* monitor;
    struct RecorderMessagePlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderMessagePlugin_FWDDECL)
#define IL2CPP_STRUCT_RecorderMessagePlugin_FWDDECL
#include <Modloader/app/structs/RecorderMessagePlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderMessagePlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderMessagePlugin_DEFINED) && !defined(IL2CPP_STRUCT_RecorderMessagePlugin_FWDDECL)
#include <Modloader/app/structs/RecorderMessagePlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderMessagePlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
