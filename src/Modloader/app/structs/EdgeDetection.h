#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EdgeDetection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EdgeDetection_INITIALIZING
#if !defined(IL2CPP_STRUCT_EdgeDetection_DEFINED)
#include <Modloader/app/structs/EdgeDetection__Fields.h>
#if defined(IL2CPP_STRUCT_EdgeDetection__Fields_DEFINED)
#define IL2CPP_STRUCT_EdgeDetection_DEFINED
struct EdgeDetection__Class;
struct EdgeDetection {
    struct EdgeDetection__Class* klass;
    MonitorData* monitor;
    struct EdgeDetection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EdgeDetection_FWDDECL)
#define IL2CPP_STRUCT_EdgeDetection_FWDDECL
#include <Modloader/app/structs/EdgeDetection__Class.h>
#endif
#undef IL2CPP_STRUCT_EdgeDetection_INITIALIZING
#if !defined(IL2CPP_STRUCT_EdgeDetection_DEFINED) && !defined(IL2CPP_STRUCT_EdgeDetection_FWDDECL)
#include <Modloader/app/structs/EdgeDetection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EdgeDetection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
