#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListenerSoundZoneTaskData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListenerSoundZoneTaskData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerSoundZoneTaskData_DEFINED)
#include <Modloader/app/structs/AudioZoneShape2D__Enum.h>
#include <Modloader/app/structs/Bounds.h>
#if defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_AudioZoneShape2D__Enum_DEFINED)
#define IL2CPP_STRUCT_ListenerSoundZoneTaskData_DEFINED
struct ListenerSoundZoneTaskData {
    struct Bounds Bounds;
    AudioZoneShape2D__Enum Shape;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListenerSoundZoneTaskData_FWDDECL)
#define IL2CPP_STRUCT_ListenerSoundZoneTaskData_FWDDECL
#endif
#undef IL2CPP_STRUCT_ListenerSoundZoneTaskData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerSoundZoneTaskData_DEFINED) && !defined(IL2CPP_STRUCT_ListenerSoundZoneTaskData_FWDDECL)
#include <Modloader/app/structs/ListenerSoundZoneTaskData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListenerSoundZoneTaskData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
