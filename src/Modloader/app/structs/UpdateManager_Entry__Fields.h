#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateManager_Entry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateManager_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager_Entry__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateManager_Entry__Fields_DEFINED
struct String;
struct MonoBehaviour;
struct GameObject;
struct IUpdateWhileDisabled;
struct __declspec(align(8)) UpdateManager_Entry__Fields {
    int32_t ExecutionOrder;
    int32_t UpdateCounter;
    bool MarkedForRemoval;
    bool ShouldBeAutoSuspended;
    struct String* UpdateHandlerType;
    struct MonoBehaviour* HandlerBehaviour;
    struct GameObject* HandlerGameObject;
    bool IsMonobehaviour;
    bool NewlyAdded;
    struct IUpdateWhileDisabled* HandlerAsUpdateWhileDisabled;
};
#endif
#if !defined(IL2CPP_STRUCT_UpdateManager_Entry__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpdateManager_Entry__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUpdateWhileDisabled.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UpdateManager_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager_Entry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpdateManager_Entry__Fields_FWDDECL)
#include <Modloader/app/structs/UpdateManager_Entry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateManager_Entry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
