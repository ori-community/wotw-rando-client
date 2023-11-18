#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationWarping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationWarping_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationWarping_DEFINED)
#include <Modloader/app/structs/AnimationWarping__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationWarping__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationWarping_DEFINED
struct AnimationWarping__Class;
struct AnimationWarping {
    struct AnimationWarping__Class* klass;
    MonitorData* monitor;
    struct AnimationWarping__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationWarping_FWDDECL)
#define IL2CPP_STRUCT_AnimationWarping_FWDDECL
#include <Modloader/app/structs/AnimationWarping__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationWarping_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationWarping_DEFINED) && !defined(IL2CPP_STRUCT_AnimationWarping_FWDDECL)
#include <Modloader/app/structs/AnimationWarping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationWarping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
