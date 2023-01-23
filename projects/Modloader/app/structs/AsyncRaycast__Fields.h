#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncRaycast__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncRaycast__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRaycast__Fields_DEFINED)
#include <Modloader/app/structs/AsyncRaycast_Result__Enum.h>
#include <Modloader/app/structs/AsyncRaycast_State__Enum.h>
#include <Modloader/app/structs/RaycastCommand.h>
#include <Modloader/app/structs/RaycastHit.h>
#if defined(IL2CPP_STRUCT_RaycastCommand_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_AsyncRaycast_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_AsyncRaycast_Result__Enum_DEFINED)
#define IL2CPP_STRUCT_AsyncRaycast__Fields_DEFINED
struct __declspec(align(8)) AsyncRaycast__Fields {
    struct RaycastCommand cmd;
    struct RaycastHit hit;
    AsyncRaycast_State__Enum state;

    AsyncRaycast_Result__Enum result;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncRaycast__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsyncRaycast__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AsyncRaycast__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncRaycast__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsyncRaycast__Fields_FWDDECL)
#include <Modloader/app/structs/AsyncRaycast__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncRaycast__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
