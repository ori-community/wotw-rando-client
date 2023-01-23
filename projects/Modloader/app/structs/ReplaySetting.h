#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplaySetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplaySetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplaySetting_DEFINED)
#include <Modloader/app/structs/ReplaySetting__Fields.h>
#if defined(IL2CPP_STRUCT_ReplaySetting__Fields_DEFINED)
#define IL2CPP_STRUCT_ReplaySetting_DEFINED
struct ReplaySetting__Class;
struct ReplaySetting {
    struct ReplaySetting__Class* klass;
    MonitorData* monitor;
    struct ReplaySetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplaySetting_FWDDECL)
#define IL2CPP_STRUCT_ReplaySetting_FWDDECL
#include <Modloader/app/structs/ReplaySetting__Class.h>
#endif
#undef IL2CPP_STRUCT_ReplaySetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplaySetting_DEFINED) && !defined(IL2CPP_STRUCT_ReplaySetting_FWDDECL)
#include <Modloader/app/structs/ReplaySetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplaySetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
