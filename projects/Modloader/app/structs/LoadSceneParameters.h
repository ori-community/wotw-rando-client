#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadSceneParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadSceneParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadSceneParameters_DEFINED)
#include <Modloader/app/structs/LoadSceneMode__Enum.h>
#include <Modloader/app/structs/LocalPhysicsMode__Enum.h>
#if defined(IL2CPP_STRUCT_LoadSceneMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_LocalPhysicsMode__Enum_DEFINED)
#define IL2CPP_STRUCT_LoadSceneParameters_DEFINED
struct LoadSceneParameters {
    LoadSceneMode__Enum m_LoadSceneMode;

    LocalPhysicsMode__Enum m_LocalPhysicsMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadSceneParameters_FWDDECL)
#define IL2CPP_STRUCT_LoadSceneParameters_FWDDECL
#endif
#undef IL2CPP_STRUCT_LoadSceneParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadSceneParameters_DEFINED) && !defined(IL2CPP_STRUCT_LoadSceneParameters_FWDDECL)
#include <Modloader/app/structs/LoadSceneParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadSceneParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
