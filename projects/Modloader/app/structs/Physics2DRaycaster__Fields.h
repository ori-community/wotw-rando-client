#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Physics2DRaycaster__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Physics2DRaycaster__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Physics2DRaycaster__Fields_DEFINED)
#include <Modloader/app/structs/PhysicsRaycaster__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsRaycaster__Fields_DEFINED)
#define IL2CPP_STRUCT_Physics2DRaycaster__Fields_DEFINED
struct RaycastHit2D__Array;
struct Physics2DRaycaster__Fields {
    struct PhysicsRaycaster__Fields _;
    struct RaycastHit2D__Array* m_Hits;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Physics2DRaycaster__Fields_FWDDECL)
#define IL2CPP_STRUCT_Physics2DRaycaster__Fields_FWDDECL
#include <Modloader/app/structs/RaycastHit2D__Array.h>
#endif
#undef IL2CPP_STRUCT_Physics2DRaycaster__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Physics2DRaycaster__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Physics2DRaycaster__Fields_FWDDECL)
#include <Modloader/app/structs/Physics2DRaycaster__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Physics2DRaycaster__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
