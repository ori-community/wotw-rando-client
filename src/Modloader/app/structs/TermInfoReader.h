#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TermInfoReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TermInfoReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_TermInfoReader_DEFINED)
#include <Modloader/app/structs/TermInfoReader__Fields.h>
#if defined(IL2CPP_STRUCT_TermInfoReader__Fields_DEFINED)
#define IL2CPP_STRUCT_TermInfoReader_DEFINED
struct TermInfoReader__Class;
struct TermInfoReader {
    struct TermInfoReader__Class* klass;
    MonitorData* monitor;
    struct TermInfoReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TermInfoReader_FWDDECL)
#define IL2CPP_STRUCT_TermInfoReader_FWDDECL
#include <Modloader/app/structs/TermInfoReader__Class.h>
#endif
#undef IL2CPP_STRUCT_TermInfoReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_TermInfoReader_DEFINED) && !defined(IL2CPP_STRUCT_TermInfoReader_FWDDECL)
#include <Modloader/app/structs/TermInfoReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TermInfoReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
