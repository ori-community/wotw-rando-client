#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RejectHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RejectHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RejectHandler_DEFINED)
#define IL2CPP_STRUCT_RejectHandler_DEFINED
struct Action_1_Exception_;
struct IRejectable;
struct RejectHandler {
    struct Action_1_Exception_* callback;
    struct IRejectable* rejectable;
};
#endif
#if !defined(IL2CPP_STRUCT_RejectHandler_FWDDECL)
#define IL2CPP_STRUCT_RejectHandler_FWDDECL
#include <Modloader/app/structs/Action_1_Exception_.h>
#include <Modloader/app/structs/IRejectable.h>
#endif
#undef IL2CPP_STRUCT_RejectHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RejectHandler_DEFINED) && !defined(IL2CPP_STRUCT_RejectHandler_FWDDECL)
#include <Modloader/app/structs/RejectHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RejectHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
