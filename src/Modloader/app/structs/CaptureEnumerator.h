#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CaptureEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CaptureEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureEnumerator_DEFINED)
#include <Modloader/app/structs/CaptureEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_CaptureEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_CaptureEnumerator_DEFINED
struct CaptureEnumerator__Class;
struct CaptureEnumerator {
    struct CaptureEnumerator__Class* klass;
    MonitorData* monitor;
    struct CaptureEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CaptureEnumerator_FWDDECL)
#define IL2CPP_STRUCT_CaptureEnumerator_FWDDECL
#include <Modloader/app/structs/CaptureEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_CaptureEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_CaptureEnumerator_FWDDECL)
#include <Modloader/app/structs/CaptureEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CaptureEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
