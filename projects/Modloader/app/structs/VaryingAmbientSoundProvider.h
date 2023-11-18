#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VaryingAmbientSoundProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VaryingAmbientSoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VaryingAmbientSoundProvider_DEFINED)
#include <Modloader/app/structs/VaryingAmbientSoundProvider__Fields.h>
#if defined(IL2CPP_STRUCT_VaryingAmbientSoundProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_VaryingAmbientSoundProvider_DEFINED
struct VaryingAmbientSoundProvider__Class;
struct VaryingAmbientSoundProvider {
    struct VaryingAmbientSoundProvider__Class* klass;
    MonitorData* monitor;
    struct VaryingAmbientSoundProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VaryingAmbientSoundProvider_FWDDECL)
#define IL2CPP_STRUCT_VaryingAmbientSoundProvider_FWDDECL
#include <Modloader/app/structs/VaryingAmbientSoundProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_VaryingAmbientSoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VaryingAmbientSoundProvider_DEFINED) && !defined(IL2CPP_STRUCT_VaryingAmbientSoundProvider_FWDDECL)
#include <Modloader/app/structs/VaryingAmbientSoundProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VaryingAmbientSoundProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
