#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Evidence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Evidence_INITIALIZING
#if !defined(IL2CPP_STRUCT_Evidence_DEFINED)
#include <Modloader/app/structs/Evidence__Fields.h>
#if defined(IL2CPP_STRUCT_Evidence__Fields_DEFINED)
#define IL2CPP_STRUCT_Evidence_DEFINED
struct Evidence__Class;
struct Evidence {
    struct Evidence__Class* klass;
    MonitorData* monitor;
    struct Evidence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Evidence_FWDDECL)
#define IL2CPP_STRUCT_Evidence_FWDDECL
#include <Modloader/app/structs/Evidence__Class.h>
#endif
#undef IL2CPP_STRUCT_Evidence_INITIALIZING
#if !defined(IL2CPP_STRUCT_Evidence_DEFINED) && !defined(IL2CPP_STRUCT_Evidence_FWDDECL)
#include <Modloader/app/structs/Evidence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Evidence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
