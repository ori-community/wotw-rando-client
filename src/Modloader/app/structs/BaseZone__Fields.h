#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseZone__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_BaseZone__Fields_DEFINED
struct Transform;
struct BaseZone__Fields {
    struct SaveSerialize__Fields _;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    bool m_active;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseZone__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BaseZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseZone__Fields_FWDDECL)
#include <Modloader/app/structs/BaseZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
