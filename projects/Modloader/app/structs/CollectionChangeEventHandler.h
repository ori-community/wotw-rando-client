#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollectionChangeEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollectionChangeEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionChangeEventHandler_DEFINED)
#include <Modloader/app/structs/CollectionChangeEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_CollectionChangeEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_CollectionChangeEventHandler_DEFINED
struct CollectionChangeEventHandler__Class;
struct CollectionChangeEventHandler {
    struct CollectionChangeEventHandler__Class* klass;
    MonitorData* monitor;
    struct CollectionChangeEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollectionChangeEventHandler_FWDDECL)
#define IL2CPP_STRUCT_CollectionChangeEventHandler_FWDDECL
#include <Modloader/app/structs/CollectionChangeEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_CollectionChangeEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionChangeEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_CollectionChangeEventHandler_FWDDECL)
#include <Modloader/app/structs/CollectionChangeEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollectionChangeEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
