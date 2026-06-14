#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAction_DEFINED)
#include <Modloader/app/structs/SoundAction__Fields.h>
#if defined(IL2CPP_STRUCT_SoundAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundAction_DEFINED
struct SoundAction__Class;
struct SoundAction {
    struct SoundAction__Class* klass;
    MonitorData* monitor;
    struct SoundAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundAction_FWDDECL)
#define IL2CPP_STRUCT_SoundAction_FWDDECL
#include <Modloader/app/structs/SoundAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAction_DEFINED) && !defined(IL2CPP_STRUCT_SoundAction_FWDDECL)
#include <Modloader/app/structs/SoundAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
