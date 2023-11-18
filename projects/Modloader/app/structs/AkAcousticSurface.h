#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAcousticSurface_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAcousticSurface_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAcousticSurface_DEFINED)
#include <Modloader/app/structs/AkAcousticSurface__Fields.h>
#if defined(IL2CPP_STRUCT_AkAcousticSurface__Fields_DEFINED)
#define IL2CPP_STRUCT_AkAcousticSurface_DEFINED
struct AkAcousticSurface__Class;
struct AkAcousticSurface {
    struct AkAcousticSurface__Class* klass;
    MonitorData* monitor;
    struct AkAcousticSurface__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkAcousticSurface_FWDDECL)
#define IL2CPP_STRUCT_AkAcousticSurface_FWDDECL
#include <Modloader/app/structs/AkAcousticSurface__Class.h>
#endif
#undef IL2CPP_STRUCT_AkAcousticSurface_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAcousticSurface_DEFINED) && !defined(IL2CPP_STRUCT_AkAcousticSurface_FWDDECL)
#include <Modloader/app/structs/AkAcousticSurface.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAcousticSurface.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
