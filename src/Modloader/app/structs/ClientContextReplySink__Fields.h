#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientContextReplySink__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientContextReplySink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientContextReplySink__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientContextReplySink__Fields_DEFINED
struct IMessageSink;
struct Context;
struct __declspec(align(8)) ClientContextReplySink__Fields {
    struct IMessageSink* _replySink;
    struct Context* _context;
};
#endif
#if !defined(IL2CPP_STRUCT_ClientContextReplySink__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClientContextReplySink__Fields_FWDDECL
#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/IMessageSink.h>
#endif
#undef IL2CPP_STRUCT_ClientContextReplySink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientContextReplySink__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClientContextReplySink__Fields_FWDDECL)
#include <Modloader/app/structs/ClientContextReplySink__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientContextReplySink__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
