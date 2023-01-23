#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IScenePosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IScenePosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IScenePosition_DEFINED)
#define IL2CPP_STRUCT_IScenePosition_DEFINED
struct IScenePosition__Class;
struct IScenePosition {
    struct IScenePosition__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IScenePosition_FWDDECL)
#define IL2CPP_STRUCT_IScenePosition_FWDDECL
#include <Modloader/app/structs/IScenePosition__Class.h>
#endif
#undef IL2CPP_STRUCT_IScenePosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IScenePosition_DEFINED) && !defined(IL2CPP_STRUCT_IScenePosition_FWDDECL)
#include <Modloader/app/structs/IScenePosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IScenePosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
