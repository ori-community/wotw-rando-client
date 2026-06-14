#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriangleLocator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriangleLocator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleLocator_DEFINED)
#include <Modloader/app/structs/TriangleLocator__Fields.h>
#if defined(IL2CPP_STRUCT_TriangleLocator__Fields_DEFINED)
#define IL2CPP_STRUCT_TriangleLocator_DEFINED
struct TriangleLocator__Class;
struct TriangleLocator {
    struct TriangleLocator__Class* klass;
    MonitorData* monitor;
    struct TriangleLocator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriangleLocator_FWDDECL)
#define IL2CPP_STRUCT_TriangleLocator_FWDDECL
#include <Modloader/app/structs/TriangleLocator__Class.h>
#endif
#undef IL2CPP_STRUCT_TriangleLocator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriangleLocator_DEFINED) && !defined(IL2CPP_STRUCT_TriangleLocator_FWDDECL)
#include <Modloader/app/structs/TriangleLocator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriangleLocator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
