#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldMapUI__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldMapUI__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapUI__StaticFields_DEFINED)
#define IL2CPP_STRUCT_WorldMapUI__StaticFields_DEFINED
struct WorldMapUI;
struct WorldMapUI__StaticFields {
    struct WorldMapUI* Instance;
    bool m_isLoadingWorldMapScene;
    bool m_cancelLoading;
};
#endif
#if !defined(IL2CPP_STRUCT_WorldMapUI__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_WorldMapUI__StaticFields_FWDDECL
#include <Modloader/app/structs/WorldMapUI.h>
#endif
#undef IL2CPP_STRUCT_WorldMapUI__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapUI__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_WorldMapUI__StaticFields_FWDDECL)
#include <Modloader/app/structs/WorldMapUI__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldMapUI__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
