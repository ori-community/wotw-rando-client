#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitFlash3D_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitFlash3D_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitFlash3D_DEFINED)
#include <Modloader/app/structs/HitFlash3D__Fields.h>
#if defined(IL2CPP_STRUCT_HitFlash3D__Fields_DEFINED)
#define IL2CPP_STRUCT_HitFlash3D_DEFINED
struct HitFlash3D__Class;
struct HitFlash3D {
    struct HitFlash3D__Class* klass;
    MonitorData* monitor;
    struct HitFlash3D__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitFlash3D_FWDDECL)
#define IL2CPP_STRUCT_HitFlash3D_FWDDECL
#include <Modloader/app/structs/HitFlash3D__Class.h>
#endif
#undef IL2CPP_STRUCT_HitFlash3D_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitFlash3D_DEFINED) && !defined(IL2CPP_STRUCT_HitFlash3D_FWDDECL)
#include <Modloader/app/structs/HitFlash3D.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitFlash3D.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
