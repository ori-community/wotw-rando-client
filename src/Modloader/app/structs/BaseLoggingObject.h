#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseLoggingObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseLoggingObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseLoggingObject_DEFINED)
#define IL2CPP_STRUCT_BaseLoggingObject_DEFINED
struct BaseLoggingObject__Class;
struct BaseLoggingObject {
    struct BaseLoggingObject__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BaseLoggingObject_FWDDECL)
#define IL2CPP_STRUCT_BaseLoggingObject_FWDDECL
#include <Modloader/app/structs/BaseLoggingObject__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseLoggingObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseLoggingObject_DEFINED) && !defined(IL2CPP_STRUCT_BaseLoggingObject_FWDDECL)
#include <Modloader/app/structs/BaseLoggingObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseLoggingObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
