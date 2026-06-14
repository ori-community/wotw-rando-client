#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkChannelEmitterArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkChannelEmitterArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkChannelEmitterArray_DEFINED)
#include <Modloader/app/structs/AkChannelEmitterArray__Fields.h>
#if defined(IL2CPP_STRUCT_AkChannelEmitterArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkChannelEmitterArray_DEFINED
struct AkChannelEmitterArray__Class;
struct AkChannelEmitterArray {
    struct AkChannelEmitterArray__Class* klass;
    MonitorData* monitor;
    struct AkChannelEmitterArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkChannelEmitterArray_FWDDECL)
#define IL2CPP_STRUCT_AkChannelEmitterArray_FWDDECL
#include <Modloader/app/structs/AkChannelEmitterArray__Class.h>
#endif
#undef IL2CPP_STRUCT_AkChannelEmitterArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkChannelEmitterArray_DEFINED) && !defined(IL2CPP_STRUCT_AkChannelEmitterArray_FWDDECL)
#include <Modloader/app/structs/AkChannelEmitterArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkChannelEmitterArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
