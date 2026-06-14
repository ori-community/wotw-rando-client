#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddSession_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddSession_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddSession_DEFINED)
#include <Modloader/app/structs/AddSession__Fields.h>
#if defined(IL2CPP_STRUCT_AddSession__Fields_DEFINED)
#define IL2CPP_STRUCT_AddSession_DEFINED
struct AddSession__Class;
struct AddSession {
    struct AddSession__Class* klass;
    MonitorData* monitor;
    struct AddSession__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddSession_FWDDECL)
#define IL2CPP_STRUCT_AddSession_FWDDECL
#include <Modloader/app/structs/AddSession__Class.h>
#endif
#undef IL2CPP_STRUCT_AddSession_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddSession_DEFINED) && !defined(IL2CPP_STRUCT_AddSession_FWDDECL)
#include <Modloader/app/structs/AddSession.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddSession.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
