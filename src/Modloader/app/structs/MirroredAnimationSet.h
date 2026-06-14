#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MirroredAnimationSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MirroredAnimationSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirroredAnimationSet_DEFINED)
#include <Modloader/app/structs/MirroredAnimationSet__Fields.h>
#if defined(IL2CPP_STRUCT_MirroredAnimationSet__Fields_DEFINED)
#define IL2CPP_STRUCT_MirroredAnimationSet_DEFINED
struct MirroredAnimationSet__Class;
struct MirroredAnimationSet {
    struct MirroredAnimationSet__Class* klass;
    MonitorData* monitor;
    struct MirroredAnimationSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MirroredAnimationSet_FWDDECL)
#define IL2CPP_STRUCT_MirroredAnimationSet_FWDDECL
#include <Modloader/app/structs/MirroredAnimationSet__Class.h>
#endif
#undef IL2CPP_STRUCT_MirroredAnimationSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirroredAnimationSet_DEFINED) && !defined(IL2CPP_STRUCT_MirroredAnimationSet_FWDDECL)
#include <Modloader/app/structs/MirroredAnimationSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MirroredAnimationSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
