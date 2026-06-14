#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerEditorConnectionEvents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerEditorConnectionEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents_DEFINED)
#include <Modloader/app/structs/PlayerEditorConnectionEvents__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerEditorConnectionEvents_DEFINED
struct PlayerEditorConnectionEvents__Class;
struct PlayerEditorConnectionEvents {
    struct PlayerEditorConnectionEvents__Class* klass;
    MonitorData* monitor;
    struct PlayerEditorConnectionEvents__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents_FWDDECL)
#define IL2CPP_STRUCT_PlayerEditorConnectionEvents_FWDDECL
#include <Modloader/app/structs/PlayerEditorConnectionEvents__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerEditorConnectionEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents_DEFINED) && !defined(IL2CPP_STRUCT_PlayerEditorConnectionEvents_FWDDECL)
#include <Modloader/app/structs/PlayerEditorConnectionEvents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerEditorConnectionEvents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
