#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CheatsHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CheatsHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheatsHandler_DEFINED)
#include <Modloader/app/structs/CheatsHandler__Fields.h>
#if defined(IL2CPP_STRUCT_CheatsHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_CheatsHandler_DEFINED
struct CheatsHandler__Class;
struct CheatsHandler {
    struct CheatsHandler__Class* klass;
    MonitorData* monitor;
    struct CheatsHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CheatsHandler_FWDDECL)
#define IL2CPP_STRUCT_CheatsHandler_FWDDECL
#include <Modloader/app/structs/CheatsHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_CheatsHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheatsHandler_DEFINED) && !defined(IL2CPP_STRUCT_CheatsHandler_FWDDECL)
#include <Modloader/app/structs/CheatsHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CheatsHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
