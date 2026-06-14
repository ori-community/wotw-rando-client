#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapTrigger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SnapTrapTrigger__Fields_DEFINED
struct SnapTrapEntity;
struct Transform;
struct SnapTrapTrigger__Fields {
    struct MonoBehaviour__Fields _;
    struct SnapTrapEntity* SnapTrapEntity;
    struct Transform* FollowTarget;
    bool AlwaysInstantCatch;
    struct Vector3 m_followOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapTrigger__Fields_FWDDECL
#include <Modloader/app/structs/SnapTrapEntity.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SnapTrapTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/SnapTrapTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
