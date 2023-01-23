#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimationEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimationEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimationEvent_DEFINED)
#include <Modloader/app/structs/MoonAnimationEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimationEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimationEvent_DEFINED
struct MoonAnimationEvent__Class;
struct MoonAnimationEvent {
    struct MoonAnimationEvent__Class* klass;
    MonitorData* monitor;
    struct MoonAnimationEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimationEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimationEvent_FWDDECL
#include <Modloader/app/structs/MoonAnimationEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimationEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimationEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimationEvent_FWDDECL)
#include <Modloader/app/structs/MoonAnimationEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimationEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
