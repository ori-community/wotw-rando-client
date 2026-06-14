#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Scene_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Scene_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scene_DEFINED)
#define IL2CPP_STRUCT_Scene_DEFINED
struct Scene {
    int32_t m_Handle;
};
#endif
#if !defined(IL2CPP_STRUCT_Scene_FWDDECL)
#define IL2CPP_STRUCT_Scene_FWDDECL
#endif
#undef IL2CPP_STRUCT_Scene_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scene_DEFINED) && !defined(IL2CPP_STRUCT_Scene_FWDDECL)
#include <Modloader/app/structs/Scene.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Scene.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
