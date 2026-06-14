#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GeneralDebugMenuPage_SceneInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GeneralDebugMenuPage_SceneInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeneralDebugMenuPage_SceneInfo_DEFINED)
#define IL2CPP_STRUCT_GeneralDebugMenuPage_SceneInfo_DEFINED
struct String;
struct GeneralDebugMenuPage_SceneInfo {
    int32_t index;
    struct String* label;
};
#endif
#if !defined(IL2CPP_STRUCT_GeneralDebugMenuPage_SceneInfo_FWDDECL)
#define IL2CPP_STRUCT_GeneralDebugMenuPage_SceneInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GeneralDebugMenuPage_SceneInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeneralDebugMenuPage_SceneInfo_DEFINED) && !defined(IL2CPP_STRUCT_GeneralDebugMenuPage_SceneInfo_FWDDECL)
#include <Modloader/app/structs/GeneralDebugMenuPage_SceneInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GeneralDebugMenuPage_SceneInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
