#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IReferenceService_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IReferenceService_INITIALIZING
#if !defined(IL2CPP_STRUCT_IReferenceService_DEFINED)
#define IL2CPP_STRUCT_IReferenceService_DEFINED
struct IReferenceService__Class;
struct IReferenceService {
    struct IReferenceService__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IReferenceService_FWDDECL)
#define IL2CPP_STRUCT_IReferenceService_FWDDECL
#include <Modloader/app/structs/IReferenceService__Class.h>
#endif
#undef IL2CPP_STRUCT_IReferenceService_INITIALIZING
#if !defined(IL2CPP_STRUCT_IReferenceService_DEFINED) && !defined(IL2CPP_STRUCT_IReferenceService_FWDDECL)
#include <Modloader/app/structs/IReferenceService.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IReferenceService.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
