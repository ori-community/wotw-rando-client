#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmplifyColorVolume_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmplifyColorVolume_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmplifyColorVolume_DEFINED)
#include <Modloader/app/structs/AmplifyColorVolume__Fields.h>
#if defined(IL2CPP_STRUCT_AmplifyColorVolume__Fields_DEFINED)
#define IL2CPP_STRUCT_AmplifyColorVolume_DEFINED
struct AmplifyColorVolume__Class;
struct AmplifyColorVolume {
    struct AmplifyColorVolume__Class* klass;
    MonitorData* monitor;
    struct AmplifyColorVolume__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmplifyColorVolume_FWDDECL)
#define IL2CPP_STRUCT_AmplifyColorVolume_FWDDECL
#include <Modloader/app/structs/AmplifyColorVolume__Class.h>
#endif
#undef IL2CPP_STRUCT_AmplifyColorVolume_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmplifyColorVolume_DEFINED) && !defined(IL2CPP_STRUCT_AmplifyColorVolume_FWDDECL)
#include <Modloader/app/structs/AmplifyColorVolume.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmplifyColorVolume.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
