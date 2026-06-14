#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsScene_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsScene_DEFINED)
#define IL2CPP_STRUCT_PhysicsScene_DEFINED
struct PhysicsScene {
    int32_t m_Handle;
};
#endif
#if !defined(IL2CPP_STRUCT_PhysicsScene_FWDDECL)
#define IL2CPP_STRUCT_PhysicsScene_FWDDECL
#endif
#undef IL2CPP_STRUCT_PhysicsScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsScene_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsScene_FWDDECL)
#include <Modloader/app/structs/PhysicsScene.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsScene.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
