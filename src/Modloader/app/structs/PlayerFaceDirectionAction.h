#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerFaceDirectionAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerFaceDirectionAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerFaceDirectionAction_DEFINED)
#include <Modloader/app/structs/PlayerFaceDirectionAction__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerFaceDirectionAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerFaceDirectionAction_DEFINED
struct PlayerFaceDirectionAction__Class;
struct PlayerFaceDirectionAction {
    struct PlayerFaceDirectionAction__Class* klass;
    MonitorData* monitor;
    struct PlayerFaceDirectionAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerFaceDirectionAction_FWDDECL)
#define IL2CPP_STRUCT_PlayerFaceDirectionAction_FWDDECL
#include <Modloader/app/structs/PlayerFaceDirectionAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerFaceDirectionAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerFaceDirectionAction_DEFINED) && !defined(IL2CPP_STRUCT_PlayerFaceDirectionAction_FWDDECL)
#include <Modloader/app/structs/PlayerFaceDirectionAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerFaceDirectionAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
