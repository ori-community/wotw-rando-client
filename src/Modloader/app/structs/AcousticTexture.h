#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AcousticTexture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AcousticTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcousticTexture_DEFINED)
#include <Modloader/app/structs/AcousticTexture__Fields.h>
#if defined(IL2CPP_STRUCT_AcousticTexture__Fields_DEFINED)
#define IL2CPP_STRUCT_AcousticTexture_DEFINED
struct AcousticTexture__Class;
struct AcousticTexture {
    struct AcousticTexture__Class* klass;
    MonitorData* monitor;
    struct AcousticTexture__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AcousticTexture_FWDDECL)
#define IL2CPP_STRUCT_AcousticTexture_FWDDECL
#include <Modloader/app/structs/AcousticTexture__Class.h>
#endif
#undef IL2CPP_STRUCT_AcousticTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcousticTexture_DEFINED) && !defined(IL2CPP_STRUCT_AcousticTexture_FWDDECL)
#include <Modloader/app/structs/AcousticTexture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AcousticTexture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
