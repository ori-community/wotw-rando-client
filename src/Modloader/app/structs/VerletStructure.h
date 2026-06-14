#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_DEFINED)
#include <Modloader/app/structs/VerletStructure__Fields.h>
#if defined(IL2CPP_STRUCT_VerletStructure__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletStructure_DEFINED
struct VerletStructure__Class;
struct VerletStructure {
    struct VerletStructure__Class* klass;
    MonitorData* monitor;
    struct VerletStructure__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure_FWDDECL
#include <Modloader/app/structs/VerletStructure__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletStructure_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure_FWDDECL)
#include <Modloader/app/structs/VerletStructure.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
