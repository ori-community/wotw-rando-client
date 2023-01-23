#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageAndStackTrace_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageAndStackTrace_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageAndStackTrace_DEFINED)
#include <Modloader/app/structs/MessageAndStackTrace__Fields.h>
#if defined(IL2CPP_STRUCT_MessageAndStackTrace__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageAndStackTrace_DEFINED
struct MessageAndStackTrace__Class;
struct MessageAndStackTrace {
    struct MessageAndStackTrace__Class* klass;
    MonitorData* monitor;
    struct MessageAndStackTrace__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageAndStackTrace_FWDDECL)
#define IL2CPP_STRUCT_MessageAndStackTrace_FWDDECL
#include <Modloader/app/structs/MessageAndStackTrace__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageAndStackTrace_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageAndStackTrace_DEFINED) && !defined(IL2CPP_STRUCT_MessageAndStackTrace_FWDDECL)
#include <Modloader/app/structs/MessageAndStackTrace.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageAndStackTrace.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
