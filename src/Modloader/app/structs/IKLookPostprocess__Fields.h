#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKLookPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKLookPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKLookPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/IKPostprocess__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_IKLookPostprocess__Fields_DEFINED
struct IKLookPostprocess__Fields {
    struct IKPostprocess__Fields _;
    bool LimitTarget;
    struct Rect TargetAllowedZone;
    float dontLookBackLimit;
    float lookLerpCoeff;
    struct Vector3 m_smoothedPos;
    struct Vector3 m_limitAxis;
    struct Vector2 m_targetLimitOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKLookPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKLookPostprocess__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_IKLookPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKLookPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKLookPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/IKLookPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKLookPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
