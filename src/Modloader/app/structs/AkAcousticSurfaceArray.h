#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAcousticSurfaceArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAcousticSurfaceArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAcousticSurfaceArray_DEFINED)
#include <Modloader/app/structs/AkAcousticSurfaceArray__Fields.h>
#if defined(IL2CPP_STRUCT_AkAcousticSurfaceArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkAcousticSurfaceArray_DEFINED
struct AkAcousticSurfaceArray__Class;
struct AkAcousticSurfaceArray {
    struct AkAcousticSurfaceArray__Class* klass;
    MonitorData* monitor;
    struct AkAcousticSurfaceArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkAcousticSurfaceArray_FWDDECL)
#define IL2CPP_STRUCT_AkAcousticSurfaceArray_FWDDECL
#include <Modloader/app/structs/AkAcousticSurfaceArray__Class.h>
#endif
#undef IL2CPP_STRUCT_AkAcousticSurfaceArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAcousticSurfaceArray_DEFINED) && !defined(IL2CPP_STRUCT_AkAcousticSurfaceArray_FWDDECL)
#include <Modloader/app/structs/AkAcousticSurfaceArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAcousticSurfaceArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
