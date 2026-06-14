#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestroyDetector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestroyDetector_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyDetector_DEFINED)
#include <Modloader/app/structs/DestroyDetector__Fields.h>
#if defined(IL2CPP_STRUCT_DestroyDetector__Fields_DEFINED)
#define IL2CPP_STRUCT_DestroyDetector_DEFINED
struct DestroyDetector__Class;
struct DestroyDetector {
    struct DestroyDetector__Class* klass;
    MonitorData* monitor;
    struct DestroyDetector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestroyDetector_FWDDECL)
#define IL2CPP_STRUCT_DestroyDetector_FWDDECL
#include <Modloader/app/structs/DestroyDetector__Class.h>
#endif
#undef IL2CPP_STRUCT_DestroyDetector_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyDetector_DEFINED) && !defined(IL2CPP_STRUCT_DestroyDetector_FWDDECL)
#include <Modloader/app/structs/DestroyDetector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestroyDetector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
