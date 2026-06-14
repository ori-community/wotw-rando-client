#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsScene2D_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsScene2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsScene2D_DEFINED)
#define IL2CPP_STRUCT_PhysicsScene2D_DEFINED
struct PhysicsScene2D {
    int32_t m_Handle;
};
#endif
#if !defined(IL2CPP_STRUCT_PhysicsScene2D_FWDDECL)
#define IL2CPP_STRUCT_PhysicsScene2D_FWDDECL
#endif
#undef IL2CPP_STRUCT_PhysicsScene2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsScene2D_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsScene2D_FWDDECL)
#include <Modloader/app/structs/PhysicsScene2D.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsScene2D.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
