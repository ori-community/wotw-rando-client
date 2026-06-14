#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetStatCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetStatCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetStatCallback_DEFINED)
#include <Modloader/app/structs/GetStatCallback__Fields.h>
#if defined(IL2CPP_STRUCT_GetStatCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_GetStatCallback_DEFINED
struct GetStatCallback__Class;
struct GetStatCallback {
    struct GetStatCallback__Class* klass;
    MonitorData* monitor;
    struct GetStatCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetStatCallback_FWDDECL)
#define IL2CPP_STRUCT_GetStatCallback_FWDDECL
#include <Modloader/app/structs/GetStatCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_GetStatCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetStatCallback_DEFINED) && !defined(IL2CPP_STRUCT_GetStatCallback_FWDDECL)
#include <Modloader/app/structs/GetStatCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetStatCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
