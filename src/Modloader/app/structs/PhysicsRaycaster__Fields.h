#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsRaycaster__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsRaycaster__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsRaycaster__Fields_DEFINED)
#include <Modloader/app/structs/BaseRaycaster__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_BaseRaycaster__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_PhysicsRaycaster__Fields_DEFINED
struct Camera;
struct RaycastHit__Array;
struct PhysicsRaycaster__Fields {
    struct BaseRaycaster__Fields _;
    struct Camera* m_EventCamera;
    struct LayerMask m_EventMask;
    int32_t m_MaxRayIntersections;
    int32_t m_LastMaxRayIntersections;
    struct RaycastHit__Array* m_Hits;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsRaycaster__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicsRaycaster__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#endif
#undef IL2CPP_STRUCT_PhysicsRaycaster__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsRaycaster__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsRaycaster__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicsRaycaster__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsRaycaster__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
