#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CaptureCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CaptureCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureCollection_DEFINED)
#include <Modloader/app/structs/CaptureCollection__Fields.h>
#if defined(IL2CPP_STRUCT_CaptureCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_CaptureCollection_DEFINED
struct CaptureCollection__Class;
struct CaptureCollection {
    struct CaptureCollection__Class* klass;
    MonitorData* monitor;
    struct CaptureCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CaptureCollection_FWDDECL)
#define IL2CPP_STRUCT_CaptureCollection_FWDDECL
#include <Modloader/app/structs/CaptureCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_CaptureCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureCollection_DEFINED) && !defined(IL2CPP_STRUCT_CaptureCollection_FWDDECL)
#include <Modloader/app/structs/CaptureCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CaptureCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
