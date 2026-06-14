#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActiveAnimationHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActiveAnimationHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED
struct IActiveAnimation;
struct ActiveAnimationHandle {
    int32_t m_version;
    struct IActiveAnimation* m_activeAnimation;
};
#endif
#if !defined(IL2CPP_STRUCT_ActiveAnimationHandle_FWDDECL)
#define IL2CPP_STRUCT_ActiveAnimationHandle_FWDDECL
#include <Modloader/app/structs/IActiveAnimation.h>
#endif
#undef IL2CPP_STRUCT_ActiveAnimationHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && !defined(IL2CPP_STRUCT_ActiveAnimationHandle_FWDDECL)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
