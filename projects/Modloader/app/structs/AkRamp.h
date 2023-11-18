#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkRamp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkRamp_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkRamp_DEFINED)
#include <Modloader/app/structs/AkRamp__Fields.h>
#if defined(IL2CPP_STRUCT_AkRamp__Fields_DEFINED)
#define IL2CPP_STRUCT_AkRamp_DEFINED
struct AkRamp__Class;
struct AkRamp {
    struct AkRamp__Class* klass;
    MonitorData* monitor;
    struct AkRamp__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkRamp_FWDDECL)
#define IL2CPP_STRUCT_AkRamp_FWDDECL
#include <Modloader/app/structs/AkRamp__Class.h>
#endif
#undef IL2CPP_STRUCT_AkRamp_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkRamp_DEFINED) && !defined(IL2CPP_STRUCT_AkRamp_FWDDECL)
#include <Modloader/app/structs/AkRamp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkRamp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
