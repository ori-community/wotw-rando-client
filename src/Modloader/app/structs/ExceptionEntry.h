#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionEntry_DEFINED)
#include <Modloader/app/structs/ExceptionEntry__Fields.h>
#if defined(IL2CPP_STRUCT_ExceptionEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionEntry_DEFINED
struct ExceptionEntry__Class;
struct ExceptionEntry {
    struct ExceptionEntry__Class* klass;
    MonitorData* monitor;
    struct ExceptionEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionEntry_FWDDECL)
#define IL2CPP_STRUCT_ExceptionEntry_FWDDECL
#include <Modloader/app/structs/ExceptionEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_ExceptionEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionEntry_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionEntry_FWDDECL)
#include <Modloader/app/structs/ExceptionEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
