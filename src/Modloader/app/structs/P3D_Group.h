#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Group_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Group_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Group_DEFINED)
#define IL2CPP_STRUCT_P3D_Group_DEFINED
struct P3D_Group {
    int32_t index;
};
#endif
#if !defined(IL2CPP_STRUCT_P3D_Group_FWDDECL)
#define IL2CPP_STRUCT_P3D_Group_FWDDECL
#endif
#undef IL2CPP_STRUCT_P3D_Group_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Group_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Group_FWDDECL)
#include <Modloader/app/structs/P3D_Group.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Group.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
