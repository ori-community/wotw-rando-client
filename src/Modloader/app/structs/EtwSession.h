#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EtwSession_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EtwSession_INITIALIZING
#if !defined(IL2CPP_STRUCT_EtwSession_DEFINED)
#include <Modloader/app/structs/EtwSession__Fields.h>
#if defined(IL2CPP_STRUCT_EtwSession__Fields_DEFINED)
#define IL2CPP_STRUCT_EtwSession_DEFINED
struct EtwSession__Class;
struct EtwSession {
    struct EtwSession__Class* klass;
    MonitorData* monitor;
    struct EtwSession__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EtwSession_FWDDECL)
#define IL2CPP_STRUCT_EtwSession_FWDDECL
#include <Modloader/app/structs/EtwSession__Class.h>
#endif
#undef IL2CPP_STRUCT_EtwSession_INITIALIZING
#if !defined(IL2CPP_STRUCT_EtwSession_DEFINED) && !defined(IL2CPP_STRUCT_EtwSession_FWDDECL)
#include <Modloader/app/structs/EtwSession.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EtwSession.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
