#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddingNewEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddingNewEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddingNewEventArgs_DEFINED)
#include <Modloader/app/structs/AddingNewEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_AddingNewEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_AddingNewEventArgs_DEFINED
struct AddingNewEventArgs__Class;
struct AddingNewEventArgs {
    struct AddingNewEventArgs__Class* klass;
    MonitorData* monitor;
    struct AddingNewEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddingNewEventArgs_FWDDECL)
#define IL2CPP_STRUCT_AddingNewEventArgs_FWDDECL
#include <Modloader/app/structs/AddingNewEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_AddingNewEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddingNewEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_AddingNewEventArgs_FWDDECL)
#include <Modloader/app/structs/AddingNewEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddingNewEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
