#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEvent__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabEventType__Enum.h>
#if defined(IL2CPP_STRUCT_PlayFabEventType__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayFabEvent__Fields_DEFINED
struct EventContents;
struct __declspec(align(8)) PlayFabEvent__Fields {
    PlayFabEventType__Enum _EventType_k__BackingField;

    struct EventContents* _EventContents_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabEvent__Fields_FWDDECL
#include <Modloader/app/structs/EventContents.h>
#endif
#undef IL2CPP_STRUCT_PlayFabEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabEvent__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
