#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoveHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoveHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoveHandler_DEFINED)
#define IL2CPP_STRUCT_IMoveHandler_DEFINED
struct IMoveHandler__Class;
struct IMoveHandler {
    struct IMoveHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoveHandler_FWDDECL)
#define IL2CPP_STRUCT_IMoveHandler_FWDDECL
#include <Modloader/app/structs/IMoveHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoveHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoveHandler_DEFINED) && !defined(IL2CPP_STRUCT_IMoveHandler_FWDDECL)
#include <Modloader/app/structs/IMoveHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoveHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
