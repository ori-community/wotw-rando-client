#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsCyclicReferenceManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsCyclicReferenceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsCyclicReferenceManager_DEFINED)
#include <Modloader/app/structs/fsCyclicReferenceManager__Fields.h>
#if defined(IL2CPP_STRUCT_fsCyclicReferenceManager__Fields_DEFINED)
#define IL2CPP_STRUCT_fsCyclicReferenceManager_DEFINED
struct fsCyclicReferenceManager__Class;
struct fsCyclicReferenceManager {
    struct fsCyclicReferenceManager__Class* klass;
    MonitorData* monitor;
    struct fsCyclicReferenceManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsCyclicReferenceManager_FWDDECL)
#define IL2CPP_STRUCT_fsCyclicReferenceManager_FWDDECL
#include <Modloader/app/structs/fsCyclicReferenceManager__Class.h>
#endif
#undef IL2CPP_STRUCT_fsCyclicReferenceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsCyclicReferenceManager_DEFINED) && !defined(IL2CPP_STRUCT_fsCyclicReferenceManager_FWDDECL)
#include <Modloader/app/structs/fsCyclicReferenceManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsCyclicReferenceManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
