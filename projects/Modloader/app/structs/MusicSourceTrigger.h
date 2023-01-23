#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MusicSourceTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MusicSourceTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicSourceTrigger_DEFINED)
#include <Modloader/app/structs/MusicSourceTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_MusicSourceTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_MusicSourceTrigger_DEFINED
struct MusicSourceTrigger__Class;
struct MusicSourceTrigger {
    struct MusicSourceTrigger__Class* klass;
    MonitorData* monitor;
    struct MusicSourceTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MusicSourceTrigger_FWDDECL)
#define IL2CPP_STRUCT_MusicSourceTrigger_FWDDECL
#include <Modloader/app/structs/MusicSourceTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_MusicSourceTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicSourceTrigger_DEFINED) && !defined(IL2CPP_STRUCT_MusicSourceTrigger_FWDDECL)
#include <Modloader/app/structs/MusicSourceTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MusicSourceTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
