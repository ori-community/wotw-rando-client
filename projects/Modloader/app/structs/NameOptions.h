#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameOptions_DEFINED)
#include <Modloader/app/structs/NameOptions__Fields.h>
#if defined(IL2CPP_STRUCT_NameOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_NameOptions_DEFINED
struct NameOptions__Class;
struct NameOptions {
    struct NameOptions__Class* klass;
    MonitorData* monitor;
    struct NameOptions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameOptions_FWDDECL)
#define IL2CPP_STRUCT_NameOptions_FWDDECL
#include <Modloader/app/structs/NameOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_NameOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameOptions_DEFINED) && !defined(IL2CPP_STRUCT_NameOptions_FWDDECL)
#include <Modloader/app/structs/NameOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
