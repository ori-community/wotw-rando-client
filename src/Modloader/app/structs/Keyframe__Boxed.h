#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Keyframe__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Keyframe__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Keyframe__Boxed_DEFINED)
#include <Modloader/app/structs/Keyframe.h>
#if defined(IL2CPP_STRUCT_Keyframe_DEFINED)
#define IL2CPP_STRUCT_Keyframe__Boxed_DEFINED
struct Keyframe__Class;
struct Keyframe__Boxed {
    struct Keyframe__Class* klass;
    MonitorData* monitor;
    struct Keyframe fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Keyframe__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Keyframe__Boxed_FWDDECL
#include <Modloader/app/structs/Keyframe__Class.h>
#endif
#undef IL2CPP_STRUCT_Keyframe__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Keyframe__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Keyframe__Boxed_FWDDECL)
#include <Modloader/app/structs/Keyframe__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Keyframe__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
