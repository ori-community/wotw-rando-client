#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaseSink__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaseSink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaseSink__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaseSink__Fields_DEFINED
struct IMessageSink;
struct __declspec(align(8)) LeaseSink__Fields {
    struct IMessageSink* _nextSink;
};
#endif
#if !defined(IL2CPP_STRUCT_LeaseSink__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaseSink__Fields_FWDDECL
#include <Modloader/app/structs/IMessageSink.h>
#endif
#undef IL2CPP_STRUCT_LeaseSink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaseSink__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaseSink__Fields_FWDDECL)
#include <Modloader/app/structs/LeaseSink__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaseSink__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
