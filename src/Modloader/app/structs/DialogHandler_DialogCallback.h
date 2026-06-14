#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogHandler_DialogCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogHandler_DialogCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogHandler_DialogCallback_DEFINED)
#include <Modloader/app/structs/DialogHandler_DialogCallback__Fields.h>
#if defined(IL2CPP_STRUCT_DialogHandler_DialogCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_DialogHandler_DialogCallback_DEFINED
struct DialogHandler_DialogCallback__Class;
struct DialogHandler_DialogCallback {
    struct DialogHandler_DialogCallback__Class* klass;
    MonitorData* monitor;
    struct DialogHandler_DialogCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DialogHandler_DialogCallback_FWDDECL)
#define IL2CPP_STRUCT_DialogHandler_DialogCallback_FWDDECL
#include <Modloader/app/structs/DialogHandler_DialogCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_DialogHandler_DialogCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogHandler_DialogCallback_DEFINED) && !defined(IL2CPP_STRUCT_DialogHandler_DialogCallback_FWDDECL)
#include <Modloader/app/structs/DialogHandler_DialogCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogHandler_DialogCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
