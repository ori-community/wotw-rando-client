#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriHeadIk__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriHeadIk__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriHeadIk__Fields_DEFINED)
#include <Modloader/app/structs/IKPostprocess__Fields.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED)
#define IL2CPP_STRUCT_OriHeadIk__Fields_DEFINED
struct OriHeadIk__Fields {
    struct IKPostprocess__Fields _;
    float DontLookBackLimit;
    float LookLerpCoeff;
    struct Vector3 m_smoothedPos;
    struct Vector3 m_limitAxis;
    struct Nullable_1_UnityEngine_Vector3_ m_lookPosition;
    int32_t m_framesLeft;
    struct Vector3 m_stableOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriHeadIk__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriHeadIk__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_OriHeadIk__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriHeadIk__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriHeadIk__Fields_FWDDECL)
#include <Modloader/app/structs/OriHeadIk__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriHeadIk__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
