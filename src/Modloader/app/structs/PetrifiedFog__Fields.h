#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedFog__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedFog__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedFog__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_PetrifiedFog__Fields_DEFINED
struct PetrifiedFog__Fields {
    struct SaveSerialize__Fields _;
    struct Rect Bounds;
    bool m_active;
    struct Vector3 m_previousPosition;
    struct Vector3 m_previousScale;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedFog__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedFog__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_PetrifiedFog__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedFog__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedFog__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedFog__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedFog__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
