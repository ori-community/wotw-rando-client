#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_GroupMask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_GroupMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_GroupMask_DEFINED)
#define IL2CPP_STRUCT_P3D_GroupMask_DEFINED
struct P3D_GroupMask {
    int32_t mask;
};
#endif
#if !defined(IL2CPP_STRUCT_P3D_GroupMask_FWDDECL)
#define IL2CPP_STRUCT_P3D_GroupMask_FWDDECL
#endif
#undef IL2CPP_STRUCT_P3D_GroupMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_GroupMask_DEFINED) && !defined(IL2CPP_STRUCT_P3D_GroupMask_FWDDECL)
#include <Modloader/app/structs/P3D_GroupMask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_GroupMask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
