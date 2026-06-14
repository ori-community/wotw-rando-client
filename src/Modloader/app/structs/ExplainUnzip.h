#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExplainUnzip_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExplainUnzip_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExplainUnzip_DEFINED)
#include <Modloader/app/structs/ExplainUnzip__Fields.h>
#if defined(IL2CPP_STRUCT_ExplainUnzip__Fields_DEFINED)
#define IL2CPP_STRUCT_ExplainUnzip_DEFINED
struct ExplainUnzip__Class;
struct ExplainUnzip {
    struct ExplainUnzip__Class* klass;
    MonitorData* monitor;
    struct ExplainUnzip__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExplainUnzip_FWDDECL)
#define IL2CPP_STRUCT_ExplainUnzip_FWDDECL
#include <Modloader/app/structs/ExplainUnzip__Class.h>
#endif
#undef IL2CPP_STRUCT_ExplainUnzip_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExplainUnzip_DEFINED) && !defined(IL2CPP_STRUCT_ExplainUnzip_FWDDECL)
#include <Modloader/app/structs/ExplainUnzip.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExplainUnzip.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
