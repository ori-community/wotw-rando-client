#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetSeinWorldStateAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetSeinWorldStateAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetSeinWorldStateAction_DEFINED)
#include <Modloader/app/structs/SetSeinWorldStateAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetSeinWorldStateAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetSeinWorldStateAction_DEFINED
struct SetSeinWorldStateAction__Class;
struct SetSeinWorldStateAction {
    struct SetSeinWorldStateAction__Class* klass;
    MonitorData* monitor;
    struct SetSeinWorldStateAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetSeinWorldStateAction_FWDDECL)
#define IL2CPP_STRUCT_SetSeinWorldStateAction_FWDDECL
#include <Modloader/app/structs/SetSeinWorldStateAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetSeinWorldStateAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetSeinWorldStateAction_DEFINED) && !defined(IL2CPP_STRUCT_SetSeinWorldStateAction_FWDDECL)
#include <Modloader/app/structs/SetSeinWorldStateAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetSeinWorldStateAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
