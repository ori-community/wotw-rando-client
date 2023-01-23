#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IReferenceRebuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IReferenceRebuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_IReferenceRebuilder_DEFINED)
#define IL2CPP_STRUCT_IReferenceRebuilder_DEFINED
struct IReferenceRebuilder__Class;
struct IReferenceRebuilder {
    struct IReferenceRebuilder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IReferenceRebuilder_FWDDECL)
#define IL2CPP_STRUCT_IReferenceRebuilder_FWDDECL
#include <Modloader/app/structs/IReferenceRebuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_IReferenceRebuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_IReferenceRebuilder_DEFINED) && !defined(IL2CPP_STRUCT_IReferenceRebuilder_FWDDECL)
#include <Modloader/app/structs/IReferenceRebuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IReferenceRebuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
