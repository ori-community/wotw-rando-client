#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldEvents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEvents_DEFINED)
#include <Modloader/app/structs/WorldEvents__Fields.h>
#if defined(IL2CPP_STRUCT_WorldEvents__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldEvents_DEFINED
struct WorldEvents__Class;
struct WorldEvents {
    struct WorldEvents__Class* klass;
    MonitorData* monitor;
    struct WorldEvents__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldEvents_FWDDECL)
#define IL2CPP_STRUCT_WorldEvents_FWDDECL
#include <Modloader/app/structs/WorldEvents__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldEvents_DEFINED) && !defined(IL2CPP_STRUCT_WorldEvents_FWDDECL)
#include <Modloader/app/structs/WorldEvents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldEvents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
