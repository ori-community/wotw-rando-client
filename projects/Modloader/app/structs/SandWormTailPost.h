#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormTailPost_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormTailPost_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormTailPost_DEFINED)
#include <Modloader/app/structs/SandWormTailPost__Fields.h>
#if defined(IL2CPP_STRUCT_SandWormTailPost__Fields_DEFINED)
#define IL2CPP_STRUCT_SandWormTailPost_DEFINED
struct SandWormTailPost__Class;
struct SandWormTailPost {
    struct SandWormTailPost__Class* klass;
    MonitorData* monitor;
    struct SandWormTailPost__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormTailPost_FWDDECL)
#define IL2CPP_STRUCT_SandWormTailPost_FWDDECL
#include <Modloader/app/structs/SandWormTailPost__Class.h>
#endif
#undef IL2CPP_STRUCT_SandWormTailPost_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormTailPost_DEFINED) && !defined(IL2CPP_STRUCT_SandWormTailPost_FWDDECL)
#include <Modloader/app/structs/SandWormTailPost.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormTailPost.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
