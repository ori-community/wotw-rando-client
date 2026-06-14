#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindSegment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindSegment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindSegment__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/WindSegment_State__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_WindSegment_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_WindSegment__Fields_DEFINED
struct WindVent;
struct Transform;
struct WindSegment__Fields {
    struct SaveSerialize__Fields _;
    float MaxTime;
    float MinTime;
    struct WindVent* FinishVent;
    float m_remainingTime;
    struct Transform* Trigger;
    struct Rect m_bounds;
    WindSegment_State__Enum m_state;

    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindSegment__Fields_FWDDECL)
#define IL2CPP_STRUCT_WindSegment__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/WindVent.h>
#endif
#undef IL2CPP_STRUCT_WindSegment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindSegment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WindSegment__Fields_FWDDECL)
#include <Modloader/app/structs/WindSegment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindSegment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
