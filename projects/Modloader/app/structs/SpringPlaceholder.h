#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpringPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpringPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringPlaceholder_DEFINED)
#include <Modloader/app/structs/SpringPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_SpringPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SpringPlaceholder_DEFINED
struct SpringPlaceholder__Class;
struct SpringPlaceholder {
    struct SpringPlaceholder__Class* klass;
    MonitorData* monitor;
    struct SpringPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpringPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_SpringPlaceholder_FWDDECL
#include <Modloader/app/structs/SpringPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_SpringPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_SpringPlaceholder_FWDDECL)
#include <Modloader/app/structs/SpringPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpringPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
