#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaycastResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaycastResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastResult_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_RaycastResult_DEFINED
struct GameObject;
struct BaseRaycaster;
struct RaycastResult {
    struct GameObject* m_GameObject;
    struct BaseRaycaster* module;
    float distance;
    float index;
    int32_t depth;
    int32_t sortingLayer;
    int32_t sortingOrder;
    struct Vector3 worldPosition;
    struct Vector3 worldNormal;
    struct Vector2 screenPosition;
    int32_t displayIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaycastResult_FWDDECL)
#define IL2CPP_STRUCT_RaycastResult_FWDDECL
#include <Modloader/app/structs/BaseRaycaster.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_RaycastResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycastResult_DEFINED) && !defined(IL2CPP_STRUCT_RaycastResult_FWDDECL)
#include <Modloader/app/structs/RaycastResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaycastResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
