#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAnimationVertex_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAnimationVertex_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAnimationVertex_DEFINED)
#define IL2CPP_STRUCT_IAnimationVertex_DEFINED
struct IAnimationVertex__Class;
struct IAnimationVertex {
    struct IAnimationVertex__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAnimationVertex_FWDDECL)
#define IL2CPP_STRUCT_IAnimationVertex_FWDDECL
#include <Modloader/app/structs/IAnimationVertex__Class.h>
#endif
#undef IL2CPP_STRUCT_IAnimationVertex_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAnimationVertex_DEFINED) && !defined(IL2CPP_STRUCT_IAnimationVertex_FWDDECL)
#include <Modloader/app/structs/IAnimationVertex.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAnimationVertex.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
