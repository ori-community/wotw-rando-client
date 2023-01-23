#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationEntry_DEFINED)
#include <Modloader/app/structs/AnimationEntry__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationEntry_DEFINED
struct AnimationEntry__Class;
struct AnimationEntry {
    struct AnimationEntry__Class* klass;
    MonitorData* monitor;
    struct AnimationEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationEntry_FWDDECL)
#define IL2CPP_STRUCT_AnimationEntry_FWDDECL
#include <Modloader/app/structs/AnimationEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationEntry_DEFINED) && !defined(IL2CPP_STRUCT_AnimationEntry_FWDDECL)
#include <Modloader/app/structs/AnimationEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
