#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateSceneParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateSceneParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateSceneParameters_DEFINED)
#include <Modloader/app/structs/LocalPhysicsMode__Enum.h>
#if defined(IL2CPP_STRUCT_LocalPhysicsMode__Enum_DEFINED)
#define IL2CPP_STRUCT_CreateSceneParameters_DEFINED
struct CreateSceneParameters {
    LocalPhysicsMode__Enum m_LocalPhysicsMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateSceneParameters_FWDDECL)
#define IL2CPP_STRUCT_CreateSceneParameters_FWDDECL
#endif
#undef IL2CPP_STRUCT_CreateSceneParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateSceneParameters_DEFINED) && !defined(IL2CPP_STRUCT_CreateSceneParameters_FWDDECL)
#include <Modloader/app/structs/CreateSceneParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateSceneParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
