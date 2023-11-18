#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmoothTransformFollower_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmoothTransformFollower_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmoothTransformFollower_DEFINED)
#include <Modloader/app/structs/SmoothTransformFollower__Fields.h>
#if defined(IL2CPP_STRUCT_SmoothTransformFollower__Fields_DEFINED)
#define IL2CPP_STRUCT_SmoothTransformFollower_DEFINED
struct SmoothTransformFollower__Class;
struct SmoothTransformFollower {
    struct SmoothTransformFollower__Class* klass;
    MonitorData* monitor;
    struct SmoothTransformFollower__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SmoothTransformFollower_FWDDECL)
#define IL2CPP_STRUCT_SmoothTransformFollower_FWDDECL
#include <Modloader/app/structs/SmoothTransformFollower__Class.h>
#endif
#undef IL2CPP_STRUCT_SmoothTransformFollower_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmoothTransformFollower_DEFINED) && !defined(IL2CPP_STRUCT_SmoothTransformFollower_FWDDECL)
#include <Modloader/app/structs/SmoothTransformFollower.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmoothTransformFollower.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
