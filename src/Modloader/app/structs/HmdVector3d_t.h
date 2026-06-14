#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HmdVector3d_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HmdVector3d_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HmdVector3d_t_DEFINED)
#define IL2CPP_STRUCT_HmdVector3d_t_DEFINED
struct HmdVector3d_t {
    double v0;
    double v1;
    double v2;
};
#endif
#if !defined(IL2CPP_STRUCT_HmdVector3d_t_FWDDECL)
#define IL2CPP_STRUCT_HmdVector3d_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_HmdVector3d_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HmdVector3d_t_DEFINED) && !defined(IL2CPP_STRUCT_HmdVector3d_t_FWDDECL)
#include <Modloader/app/structs/HmdVector3d_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HmdVector3d_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
