#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMonoSslStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMonoSslStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMonoSslStream_DEFINED)
#define IL2CPP_STRUCT_IMonoSslStream_DEFINED
struct IMonoSslStream__Class;
struct IMonoSslStream {
    struct IMonoSslStream__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMonoSslStream_FWDDECL)
#define IL2CPP_STRUCT_IMonoSslStream_FWDDECL
#include <Modloader/app/structs/IMonoSslStream__Class.h>
#endif
#undef IL2CPP_STRUCT_IMonoSslStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMonoSslStream_DEFINED) && !defined(IL2CPP_STRUCT_IMonoSslStream_FWDDECL)
#include <Modloader/app/structs/IMonoSslStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMonoSslStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
