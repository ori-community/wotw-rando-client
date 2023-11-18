#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticatedStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticatedStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticatedStream__Fields_DEFINED)
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED)
#define IL2CPP_STRUCT_AuthenticatedStream__Fields_DEFINED
struct Stream;
struct AuthenticatedStream__Fields {
    struct Stream__Fields _;
    struct Stream* _InnerStream;
    bool _LeaveStreamOpen;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuthenticatedStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_AuthenticatedStream__Fields_FWDDECL
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_AuthenticatedStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticatedStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticatedStream__Fields_FWDDECL)
#include <Modloader/app/structs/AuthenticatedStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticatedStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
