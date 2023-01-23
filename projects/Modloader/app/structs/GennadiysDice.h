#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GennadiysDice_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GennadiysDice_INITIALIZING
#if !defined(IL2CPP_STRUCT_GennadiysDice_DEFINED)
#include <Modloader/app/structs/GennadiysDice__Fields.h>
#if defined(IL2CPP_STRUCT_GennadiysDice__Fields_DEFINED)
#define IL2CPP_STRUCT_GennadiysDice_DEFINED
struct GennadiysDice__Class;
struct GennadiysDice {
    struct GennadiysDice__Class* klass;
    MonitorData* monitor;
    struct GennadiysDice__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GennadiysDice_FWDDECL)
#define IL2CPP_STRUCT_GennadiysDice_FWDDECL
#include <Modloader/app/structs/GennadiysDice__Class.h>
#endif
#undef IL2CPP_STRUCT_GennadiysDice_INITIALIZING
#if !defined(IL2CPP_STRUCT_GennadiysDice_DEFINED) && !defined(IL2CPP_STRUCT_GennadiysDice_FWDDECL)
#include <Modloader/app/structs/GennadiysDice.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GennadiysDice.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
