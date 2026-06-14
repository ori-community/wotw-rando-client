#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicAnimationPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicAnimationPlayer_DEFINED)
#include <Modloader/app/structs/DynamicAnimationPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicAnimationPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicAnimationPlayer_DEFINED
struct DynamicAnimationPlayer__Class;
struct DynamicAnimationPlayer {
    struct DynamicAnimationPlayer__Class* klass;
    MonitorData* monitor;
    struct DynamicAnimationPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicAnimationPlayer_FWDDECL)
#define IL2CPP_STRUCT_DynamicAnimationPlayer_FWDDECL
#include <Modloader/app/structs/DynamicAnimationPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicAnimationPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicAnimationPlayer_DEFINED) && !defined(IL2CPP_STRUCT_DynamicAnimationPlayer_FWDDECL)
#include <Modloader/app/structs/DynamicAnimationPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicAnimationPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
