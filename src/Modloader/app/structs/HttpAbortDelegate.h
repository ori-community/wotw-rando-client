#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpAbortDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpAbortDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpAbortDelegate_DEFINED)
#include <Modloader/app/structs/HttpAbortDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_HttpAbortDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpAbortDelegate_DEFINED
struct HttpAbortDelegate__Class;
struct HttpAbortDelegate {
    struct HttpAbortDelegate__Class* klass;
    MonitorData* monitor;
    struct HttpAbortDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpAbortDelegate_FWDDECL)
#define IL2CPP_STRUCT_HttpAbortDelegate_FWDDECL
#include <Modloader/app/structs/HttpAbortDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpAbortDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpAbortDelegate_DEFINED) && !defined(IL2CPP_STRUCT_HttpAbortDelegate_FWDDECL)
#include <Modloader/app/structs/HttpAbortDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpAbortDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
