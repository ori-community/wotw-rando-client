#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClosableStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClosableStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClosableStream__Fields_DEFINED)
#include <Modloader/app/structs/DelegatedStream__Fields.h>
#if defined(IL2CPP_STRUCT_DelegatedStream__Fields_DEFINED)
#define IL2CPP_STRUCT_ClosableStream__Fields_DEFINED
struct EventHandler;
struct ClosableStream__Fields {
    struct DelegatedStream__Fields _;
    struct EventHandler* onClose;
    int32_t closed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClosableStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClosableStream__Fields_FWDDECL
#include <Modloader/app/structs/EventHandler.h>
#endif
#undef IL2CPP_STRUCT_ClosableStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClosableStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClosableStream__Fields_FWDDECL)
#include <Modloader/app/structs/ClosableStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClosableStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
