#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EncodingProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EncodingProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodingProvider_DEFINED)
#define IL2CPP_STRUCT_EncodingProvider_DEFINED
struct EncodingProvider__Class;
struct EncodingProvider {
    struct EncodingProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EncodingProvider_FWDDECL)
#define IL2CPP_STRUCT_EncodingProvider_FWDDECL
#include <Modloader/app/structs/EncodingProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_EncodingProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodingProvider_DEFINED) && !defined(IL2CPP_STRUCT_EncodingProvider_FWDDECL)
#include <Modloader/app/structs/EncodingProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EncodingProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
