#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundZoneTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundZoneTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundZoneTrigger_DEFINED)
#include <Modloader/app/structs/SoundZoneTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_SoundZoneTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundZoneTrigger_DEFINED
struct SoundZoneTrigger__Class;
struct SoundZoneTrigger {
    struct SoundZoneTrigger__Class* klass;
    MonitorData* monitor;
    struct SoundZoneTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundZoneTrigger_FWDDECL)
#define IL2CPP_STRUCT_SoundZoneTrigger_FWDDECL
#include <Modloader/app/structs/SoundZoneTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundZoneTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundZoneTrigger_DEFINED) && !defined(IL2CPP_STRUCT_SoundZoneTrigger_FWDDECL)
#include <Modloader/app/structs/SoundZoneTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundZoneTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
