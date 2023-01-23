#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActiveAnimationHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActiveAnimationHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActiveAnimationHandle__Boxed_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#if defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_ActiveAnimationHandle__Boxed_DEFINED
struct ActiveAnimationHandle__Class;
struct ActiveAnimationHandle__Boxed {
    struct ActiveAnimationHandle__Class* klass;
    MonitorData* monitor;
    struct ActiveAnimationHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActiveAnimationHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ActiveAnimationHandle__Boxed_FWDDECL
#include <Modloader/app/structs/ActiveAnimationHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_ActiveAnimationHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActiveAnimationHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ActiveAnimationHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/ActiveAnimationHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActiveAnimationHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
