#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttachToVerletStructure_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttachToVerletStructure_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachToVerletStructure_DEFINED)
#include <Modloader/app/structs/AttachToVerletStructure__Fields.h>
#if defined(IL2CPP_STRUCT_AttachToVerletStructure__Fields_DEFINED)
#define IL2CPP_STRUCT_AttachToVerletStructure_DEFINED
struct AttachToVerletStructure__Class;
struct AttachToVerletStructure {
    struct AttachToVerletStructure__Class* klass;
    MonitorData* monitor;
    struct AttachToVerletStructure__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttachToVerletStructure_FWDDECL)
#define IL2CPP_STRUCT_AttachToVerletStructure_FWDDECL
#include <Modloader/app/structs/AttachToVerletStructure__Class.h>
#endif
#undef IL2CPP_STRUCT_AttachToVerletStructure_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachToVerletStructure_DEFINED) && !defined(IL2CPP_STRUCT_AttachToVerletStructure_FWDDECL)
#include <Modloader/app/structs/AttachToVerletStructure.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttachToVerletStructure.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
