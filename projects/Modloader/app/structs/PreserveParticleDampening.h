#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreserveParticleDampening_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreserveParticleDampening_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreserveParticleDampening_DEFINED)
#include <Modloader/app/structs/PreserveParticleDampening__Fields.h>
#if defined(IL2CPP_STRUCT_PreserveParticleDampening__Fields_DEFINED)
#define IL2CPP_STRUCT_PreserveParticleDampening_DEFINED
struct PreserveParticleDampening__Class;
struct PreserveParticleDampening {
    struct PreserveParticleDampening__Class* klass;
    MonitorData* monitor;
    struct PreserveParticleDampening__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreserveParticleDampening_FWDDECL)
#define IL2CPP_STRUCT_PreserveParticleDampening_FWDDECL
#include <Modloader/app/structs/PreserveParticleDampening__Class.h>
#endif
#undef IL2CPP_STRUCT_PreserveParticleDampening_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreserveParticleDampening_DEFINED) && !defined(IL2CPP_STRUCT_PreserveParticleDampening_FWDDECL)
#include <Modloader/app/structs/PreserveParticleDampening.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreserveParticleDampening.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
