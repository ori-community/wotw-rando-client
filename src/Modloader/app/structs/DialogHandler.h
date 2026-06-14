#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogHandler_DEFINED)
#include <Modloader/app/structs/DialogHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DialogHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DialogHandler_DEFINED
struct DialogHandler__Class;
struct DialogHandler {
    struct DialogHandler__Class* klass;
    MonitorData* monitor;
    struct DialogHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DialogHandler_FWDDECL)
#define IL2CPP_STRUCT_DialogHandler_FWDDECL
#include <Modloader/app/structs/DialogHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DialogHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogHandler_DEFINED) && !defined(IL2CPP_STRUCT_DialogHandler_FWDDECL)
#include <Modloader/app/structs/DialogHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
