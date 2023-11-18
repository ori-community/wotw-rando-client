#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnreferencedObjectEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnreferencedObjectEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnreferencedObjectEventHandler_DEFINED)
#include <Modloader/app/structs/UnreferencedObjectEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_UnreferencedObjectEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_UnreferencedObjectEventHandler_DEFINED
struct UnreferencedObjectEventHandler__Class;
struct UnreferencedObjectEventHandler {
    struct UnreferencedObjectEventHandler__Class* klass;
    MonitorData* monitor;
    struct UnreferencedObjectEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnreferencedObjectEventHandler_FWDDECL)
#define IL2CPP_STRUCT_UnreferencedObjectEventHandler_FWDDECL
#include <Modloader/app/structs/UnreferencedObjectEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_UnreferencedObjectEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnreferencedObjectEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_UnreferencedObjectEventHandler_FWDDECL)
#include <Modloader/app/structs/UnreferencedObjectEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnreferencedObjectEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
