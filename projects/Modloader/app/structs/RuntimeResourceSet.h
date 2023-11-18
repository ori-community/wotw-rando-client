#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeResourceSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeResourceSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeResourceSet_DEFINED)
#include <Modloader/app/structs/RuntimeResourceSet__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeResourceSet__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeResourceSet_DEFINED
struct RuntimeResourceSet__Class;
struct RuntimeResourceSet {
    struct RuntimeResourceSet__Class* klass;
    MonitorData* monitor;
    struct RuntimeResourceSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeResourceSet_FWDDECL)
#define IL2CPP_STRUCT_RuntimeResourceSet_FWDDECL
#include <Modloader/app/structs/RuntimeResourceSet__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeResourceSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeResourceSet_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeResourceSet_FWDDECL)
#include <Modloader/app/structs/RuntimeResourceSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeResourceSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
