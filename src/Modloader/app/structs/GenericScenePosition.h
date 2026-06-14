#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericScenePosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericScenePosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericScenePosition_DEFINED)
#include <Modloader/app/structs/GenericScenePosition__Fields.h>
#if defined(IL2CPP_STRUCT_GenericScenePosition__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericScenePosition_DEFINED
struct GenericScenePosition__Class;
struct GenericScenePosition {
    struct GenericScenePosition__Class* klass;
    MonitorData* monitor;
    struct GenericScenePosition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericScenePosition_FWDDECL)
#define IL2CPP_STRUCT_GenericScenePosition_FWDDECL
#include <Modloader/app/structs/GenericScenePosition__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericScenePosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericScenePosition_DEFINED) && !defined(IL2CPP_STRUCT_GenericScenePosition_FWDDECL)
#include <Modloader/app/structs/GenericScenePosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericScenePosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
