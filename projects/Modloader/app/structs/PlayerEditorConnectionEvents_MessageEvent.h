#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerEditorConnectionEvents_MessageEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerEditorConnectionEvents_MessageEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents_MessageEvent_DEFINED)
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageEvent__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents_MessageEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerEditorConnectionEvents_MessageEvent_DEFINED
struct PlayerEditorConnectionEvents_MessageEvent__Class;
struct PlayerEditorConnectionEvents_MessageEvent {
    struct PlayerEditorConnectionEvents_MessageEvent__Class* klass;
    MonitorData* monitor;
    struct PlayerEditorConnectionEvents_MessageEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents_MessageEvent_FWDDECL)
#define IL2CPP_STRUCT_PlayerEditorConnectionEvents_MessageEvent_FWDDECL
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerEditorConnectionEvents_MessageEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents_MessageEvent_DEFINED) && !defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents_MessageEvent_FWDDECL)
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
