#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GeneralAsyncDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GeneralAsyncDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeneralAsyncDelegate_DEFINED)
#include <Modloader/app/structs/GeneralAsyncDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_GeneralAsyncDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_GeneralAsyncDelegate_DEFINED
struct GeneralAsyncDelegate__Class;
struct GeneralAsyncDelegate {
    struct GeneralAsyncDelegate__Class* klass;
    MonitorData* monitor;
    struct GeneralAsyncDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GeneralAsyncDelegate_FWDDECL)
#define IL2CPP_STRUCT_GeneralAsyncDelegate_FWDDECL
#include <Modloader/app/structs/GeneralAsyncDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_GeneralAsyncDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeneralAsyncDelegate_DEFINED) && !defined(IL2CPP_STRUCT_GeneralAsyncDelegate_FWDDECL)
#include <Modloader/app/structs/GeneralAsyncDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GeneralAsyncDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
