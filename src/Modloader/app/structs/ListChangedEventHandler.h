#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListChangedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListChangedEventHandler_DEFINED)
#include <Modloader/app/structs/ListChangedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_ListChangedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_ListChangedEventHandler_DEFINED
struct ListChangedEventHandler__Class;
struct ListChangedEventHandler {
    struct ListChangedEventHandler__Class* klass;
    MonitorData* monitor;
    struct ListChangedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListChangedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_ListChangedEventHandler_FWDDECL
#include <Modloader/app/structs/ListChangedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ListChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListChangedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_ListChangedEventHandler_FWDDECL)
#include <Modloader/app/structs/ListChangedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListChangedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
