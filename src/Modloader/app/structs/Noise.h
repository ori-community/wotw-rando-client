#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Noise_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Noise_INITIALIZING
#if !defined(IL2CPP_STRUCT_Noise_DEFINED)
#include <Modloader/app/structs/Noise__Fields.h>
#if defined(IL2CPP_STRUCT_Noise__Fields_DEFINED)
#define IL2CPP_STRUCT_Noise_DEFINED
struct Noise__Class;
struct Noise {
    struct Noise__Class* klass;
    MonitorData* monitor;
    struct Noise__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Noise_FWDDECL)
#define IL2CPP_STRUCT_Noise_FWDDECL
#include <Modloader/app/structs/Noise__Class.h>
#endif
#undef IL2CPP_STRUCT_Noise_INITIALIZING
#if !defined(IL2CPP_STRUCT_Noise_DEFINED) && !defined(IL2CPP_STRUCT_Noise_FWDDECL)
#include <Modloader/app/structs/Noise.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Noise.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
