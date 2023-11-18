#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RiseSinkPlatform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RiseSinkPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RiseSinkPlatform__Fields_DEFINED)
#include <Modloader/app/structs/RiseSinkPlatform_State__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RiseSinkPlatform_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RiseSinkPlatform__Fields_DEFINED
struct Transform;
struct RiseSinkPlatform__Fields {
    struct SaveSerialize__Fields _;
    float SinkSpeed;
    float RiseSpeed;
    struct Vector3 m_startPosition;
    struct Transform* TransformToAffect;
    RiseSinkPlatform_State__Enum m_state;

    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RiseSinkPlatform__Fields_FWDDECL)
#define IL2CPP_STRUCT_RiseSinkPlatform__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RiseSinkPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RiseSinkPlatform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RiseSinkPlatform__Fields_FWDDECL)
#include <Modloader/app/structs/RiseSinkPlatform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RiseSinkPlatform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
