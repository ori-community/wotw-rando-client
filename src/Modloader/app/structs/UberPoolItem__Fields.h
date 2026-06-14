#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolItem__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolItem__Fields_DEFINED
struct GameObject;
struct Transform;
struct List_1_UnityEngine_GameObject_;
struct Dictionary_2_System_Int32_PoolTransformPosition_;
struct Dictionary_2_System_Int32_UnityEngine_Transform_;
struct List_1_UnityEngine_Transform_;
struct __declspec(align(8)) UberPoolItem__Fields {
    struct GameObject* Target;
    struct Transform* Group;
    struct List_1_UnityEngine_GameObject_* m_activeAtStart;
    struct Dictionary_2_System_Int32_PoolTransformPosition_* m_startPos;
    struct Dictionary_2_System_Int32_UnityEngine_Transform_* m_startParent;
    struct List_1_UnityEngine_Transform_* m_children;
    bool m_isDeceased;
    bool m_usedAfterDeceasedWarningEmitted;
    float LastAliveTime;
    bool m_isDestroyed;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPoolItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolItem__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_PoolTransformPosition_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_Transform_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_UberPoolItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolItem__Fields_FWDDECL)
#include <Modloader/app/structs/UberPoolItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
