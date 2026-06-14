#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteSettings__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteSettings__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RemoteSettings__StaticFields_DEFINED
struct RemoteSettings_UpdatedEventHandler;
struct Action;
struct Action_3_Boolean_Boolean_Int32_;
struct RemoteSettings__StaticFields {
    struct RemoteSettings_UpdatedEventHandler* Updated;
    struct Action* BeforeFetchFromServer;
    struct Action_3_Boolean_Boolean_Int32_* Completed;
};
#endif
#if !defined(IL2CPP_STRUCT_RemoteSettings__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RemoteSettings__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_3_Boolean_Boolean_Int32_.h>
#include <Modloader/app/structs/RemoteSettings_UpdatedEventHandler.h>
#endif
#undef IL2CPP_STRUCT_RemoteSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteSettings__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RemoteSettings__StaticFields_FWDDECL)
#include <Modloader/app/structs/RemoteSettings__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteSettings__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
