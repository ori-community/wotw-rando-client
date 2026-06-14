#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraOffsetAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraOffsetAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraOffsetAnimator__Fields_DEFINED
struct CameraOffsetAnimator__Fields {
    struct LegacyAnimator__Fields _;
    float m_lastValue;
    bool AnimateX;
    bool AnimateY;
    bool AnimateZ;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraOffsetAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraOffsetAnimator__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CameraOffsetAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraOffsetAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/CameraOffsetAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraOffsetAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
