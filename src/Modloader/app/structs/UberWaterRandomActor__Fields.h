#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterRandomActor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterRandomActor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterRandomActor__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_UberWaterRandomActor__Fields_DEFINED
struct Transform;
struct List_1_UberWaterControl_;
struct HashSet_1_System_Int32_;
struct UberWaterRandomActor__Fields {
    struct MonoBehaviour__Fields _;
    int32_t AverageImpactsPerSecond;
    float MinStrength;
    float MaxStrength;
    struct Rect Size;
    float MinRadius;
    float MaxRadius;
    bool ApplyToDisplacementMap;
    float m_deltaTime;
    float m_lastTime;
    float m_num;
    struct Vector2 m_lastPosition;
    int64_t m_lastWaterControllVersion;
    struct Transform* m_myTransform;
    struct List_1_UberWaterControl_* m_waterControls;
    struct Vector3 m_basePosition;
    struct HashSet_1_System_Int32_* m_waterWhiteList;
    struct HashSet_1_System_Int32_* m_waterBlackList;
    bool m_hasValidSizeY;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterRandomActor__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterRandomActor__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_UberWaterControl_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_UberWaterRandomActor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterRandomActor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterRandomActor__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterRandomActor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterRandomActor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
