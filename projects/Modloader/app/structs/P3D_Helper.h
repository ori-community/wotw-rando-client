#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Helper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Helper_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Helper_DEFINED)
#define IL2CPP_STRUCT_P3D_Helper_DEFINED
struct P3D_Helper__Class;
struct P3D_Helper {
    struct P3D_Helper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_P3D_Helper_FWDDECL)
#define IL2CPP_STRUCT_P3D_Helper_FWDDECL
#include <Modloader/app/structs/P3D_Helper__Class.h>
#endif
#undef IL2CPP_STRUCT_P3D_Helper_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Helper_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Helper_FWDDECL)
#include <Modloader/app/structs/P3D_Helper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Helper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
