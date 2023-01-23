#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabPlaceholder_DEFINED)
#include <Modloader/app/structs/CrabPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_CrabPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_CrabPlaceholder_DEFINED
struct CrabPlaceholder__Class;
struct CrabPlaceholder {
    struct CrabPlaceholder__Class* klass;
    MonitorData* monitor;
    struct CrabPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_CrabPlaceholder_FWDDECL
#include <Modloader/app/structs/CrabPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_CrabPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_CrabPlaceholder_FWDDECL)
#include <Modloader/app/structs/CrabPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
