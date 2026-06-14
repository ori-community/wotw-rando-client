#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArraySpec_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArraySpec_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArraySpec_DEFINED)
#include <Modloader/app/structs/ArraySpec__Fields.h>
#if defined(IL2CPP_STRUCT_ArraySpec__Fields_DEFINED)
#define IL2CPP_STRUCT_ArraySpec_DEFINED
struct ArraySpec__Class;
struct ArraySpec {
    struct ArraySpec__Class* klass;
    MonitorData* monitor;
    struct ArraySpec__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArraySpec_FWDDECL)
#define IL2CPP_STRUCT_ArraySpec_FWDDECL
#include <Modloader/app/structs/ArraySpec__Class.h>
#endif
#undef IL2CPP_STRUCT_ArraySpec_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArraySpec_DEFINED) && !defined(IL2CPP_STRUCT_ArraySpec_FWDDECL)
#include <Modloader/app/structs/ArraySpec.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArraySpec.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
