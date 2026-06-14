#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortVersion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortVersion_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortVersion_DEFINED)
#include <Modloader/app/structs/SortVersion__Fields.h>
#if defined(IL2CPP_STRUCT_SortVersion__Fields_DEFINED)
#define IL2CPP_STRUCT_SortVersion_DEFINED
struct SortVersion__Class;
struct SortVersion {
    struct SortVersion__Class* klass;
    MonitorData* monitor;
    struct SortVersion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SortVersion_FWDDECL)
#define IL2CPP_STRUCT_SortVersion_FWDDECL
#include <Modloader/app/structs/SortVersion__Class.h>
#endif
#undef IL2CPP_STRUCT_SortVersion_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortVersion_DEFINED) && !defined(IL2CPP_STRUCT_SortVersion_FWDDECL)
#include <Modloader/app/structs/SortVersion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortVersion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
