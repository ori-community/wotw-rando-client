#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure_VerletLink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure_VerletLink_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletLink_DEFINED)
#include <Modloader/app/structs/VerletStructure_VerletLink__Fields.h>
#if defined(IL2CPP_STRUCT_VerletStructure_VerletLink__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletStructure_VerletLink_DEFINED
struct VerletStructure_VerletLink__Class;
struct VerletStructure_VerletLink {
    struct VerletStructure_VerletLink__Class* klass;
    MonitorData* monitor;
    struct VerletStructure_VerletLink__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletLink_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure_VerletLink_FWDDECL
#include <Modloader/app/structs/VerletStructure_VerletLink__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletStructure_VerletLink_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletLink_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure_VerletLink_FWDDECL)
#include <Modloader/app/structs/VerletStructure_VerletLink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure_VerletLink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
