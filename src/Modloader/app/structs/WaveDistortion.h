#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaveDistortion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaveDistortion_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaveDistortion_DEFINED)
#include <Modloader/app/structs/WaveDistortion__Fields.h>
#if defined(IL2CPP_STRUCT_WaveDistortion__Fields_DEFINED)
#define IL2CPP_STRUCT_WaveDistortion_DEFINED
struct WaveDistortion__Class;
struct WaveDistortion {
    struct WaveDistortion__Class* klass;
    MonitorData* monitor;
    struct WaveDistortion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaveDistortion_FWDDECL)
#define IL2CPP_STRUCT_WaveDistortion_FWDDECL
#include <Modloader/app/structs/WaveDistortion__Class.h>
#endif
#undef IL2CPP_STRUCT_WaveDistortion_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaveDistortion_DEFINED) && !defined(IL2CPP_STRUCT_WaveDistortion_FWDDECL)
#include <Modloader/app/structs/WaveDistortion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaveDistortion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
