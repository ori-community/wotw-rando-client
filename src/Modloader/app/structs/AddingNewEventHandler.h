#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddingNewEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddingNewEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddingNewEventHandler_DEFINED)
#include <Modloader/app/structs/AddingNewEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_AddingNewEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_AddingNewEventHandler_DEFINED
struct AddingNewEventHandler__Class;
struct AddingNewEventHandler {
    struct AddingNewEventHandler__Class* klass;
    MonitorData* monitor;
    struct AddingNewEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddingNewEventHandler_FWDDECL)
#define IL2CPP_STRUCT_AddingNewEventHandler_FWDDECL
#include <Modloader/app/structs/AddingNewEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_AddingNewEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddingNewEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_AddingNewEventHandler_FWDDECL)
#include <Modloader/app/structs/AddingNewEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddingNewEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
