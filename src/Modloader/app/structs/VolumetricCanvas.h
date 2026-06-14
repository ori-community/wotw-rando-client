#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumetricCanvas_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumetricCanvas_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricCanvas_DEFINED)
#include <Modloader/app/structs/VolumetricCanvas__Fields.h>
#if defined(IL2CPP_STRUCT_VolumetricCanvas__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumetricCanvas_DEFINED
struct VolumetricCanvas__Class;
struct VolumetricCanvas {
    struct VolumetricCanvas__Class* klass;
    MonitorData* monitor;
    struct VolumetricCanvas__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumetricCanvas_FWDDECL)
#define IL2CPP_STRUCT_VolumetricCanvas_FWDDECL
#include <Modloader/app/structs/VolumetricCanvas__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumetricCanvas_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricCanvas_DEFINED) && !defined(IL2CPP_STRUCT_VolumetricCanvas_FWDDECL)
#include <Modloader/app/structs/VolumetricCanvas.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumetricCanvas.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
