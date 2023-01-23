#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnScreenPositions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnScreenPositions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnScreenPositions__Fields_DEFINED)
#include <Modloader/app/structs/MonoSingleInstance_1_OnScreenPositions___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoSingleInstance_1_OnScreenPositions___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_OnScreenPositions__Fields_DEFINED
struct Transform;
struct OnScreenPositions__Fields {
    struct MonoSingleInstance_1_OnScreenPositions___Fields _;
    struct Transform* TopLeftTransform;
    struct Vector3 m_topLeft;
    struct Transform* TopCenterTransform;
    struct Vector3 m_topCenter;
    struct Transform* TopRightTransform;
    struct Vector3 m_topRight;
    struct Transform* MiddleLeftTransform;
    struct Vector3 m_middleLeft;
    struct Transform* MiddleCenterTransform;
    struct Vector3 m_middleCenter;
    struct Transform* MiddleRightTransform;
    struct Vector3 m_middleRight;
    struct Transform* BottomLeftTransform;
    struct Vector3 m_bottomLeft;
    struct Transform* BottomCenterTransform;
    struct Vector3 m_bottomCenter;
    struct Transform* BottomRightTransform;
    struct Vector3 m_bottomRight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnScreenPositions__Fields_FWDDECL)
#define IL2CPP_STRUCT_OnScreenPositions__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_OnScreenPositions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnScreenPositions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OnScreenPositions__Fields_FWDDECL)
#include <Modloader/app/structs/OnScreenPositions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnScreenPositions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
