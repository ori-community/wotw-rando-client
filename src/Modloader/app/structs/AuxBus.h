#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuxBus_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuxBus_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuxBus_DEFINED)
#include <Modloader/app/structs/AuxBus__Fields.h>
#if defined(IL2CPP_STRUCT_AuxBus__Fields_DEFINED)
#define IL2CPP_STRUCT_AuxBus_DEFINED
struct AuxBus__Class;
struct AuxBus {
    struct AuxBus__Class* klass;
    MonitorData* monitor;
    struct AuxBus__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuxBus_FWDDECL)
#define IL2CPP_STRUCT_AuxBus_FWDDECL
#include <Modloader/app/structs/AuxBus__Class.h>
#endif
#undef IL2CPP_STRUCT_AuxBus_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuxBus_DEFINED) && !defined(IL2CPP_STRUCT_AuxBus_FWDDECL)
#include <Modloader/app/structs/AuxBus.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuxBus.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
