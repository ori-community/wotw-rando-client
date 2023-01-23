#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletChain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletChain_DEFINED)
#include <Modloader/app/structs/VerletChain__Fields.h>
#if defined(IL2CPP_STRUCT_VerletChain__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletChain_DEFINED
struct VerletChain__Class;
struct VerletChain {
    struct VerletChain__Class* klass;
    MonitorData* monitor;
    struct VerletChain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletChain_FWDDECL)
#define IL2CPP_STRUCT_VerletChain_FWDDECL
#include <Modloader/app/structs/VerletChain__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletChain_DEFINED) && !defined(IL2CPP_STRUCT_VerletChain_FWDDECL)
#include <Modloader/app/structs/VerletChain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletChain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
