#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeStateOnSceneEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeStateOnSceneEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeStateOnSceneEvent_DEFINED)
#include <Modloader/app/structs/ChangeStateOnSceneEvent__Fields.h>
#if defined(IL2CPP_STRUCT_ChangeStateOnSceneEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_ChangeStateOnSceneEvent_DEFINED
struct ChangeStateOnSceneEvent__Class;
struct ChangeStateOnSceneEvent {
    struct ChangeStateOnSceneEvent__Class* klass;
    MonitorData* monitor;
    struct ChangeStateOnSceneEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeStateOnSceneEvent_FWDDECL)
#define IL2CPP_STRUCT_ChangeStateOnSceneEvent_FWDDECL
#include <Modloader/app/structs/ChangeStateOnSceneEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_ChangeStateOnSceneEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeStateOnSceneEvent_DEFINED) && !defined(IL2CPP_STRUCT_ChangeStateOnSceneEvent_FWDDECL)
#include <Modloader/app/structs/ChangeStateOnSceneEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeStateOnSceneEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
