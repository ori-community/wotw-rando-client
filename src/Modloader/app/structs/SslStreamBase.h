#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslStreamBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslStreamBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslStreamBase_DEFINED)
#include <Modloader/app/structs/SslStreamBase__Fields.h>
#if defined(IL2CPP_STRUCT_SslStreamBase__Fields_DEFINED)
#define IL2CPP_STRUCT_SslStreamBase_DEFINED
struct SslStreamBase__Class;
struct SslStreamBase {
    struct SslStreamBase__Class* klass;
    MonitorData* monitor;
    struct SslStreamBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SslStreamBase_FWDDECL)
#define IL2CPP_STRUCT_SslStreamBase_FWDDECL
#include <Modloader/app/structs/SslStreamBase__Class.h>
#endif
#undef IL2CPP_STRUCT_SslStreamBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslStreamBase_DEFINED) && !defined(IL2CPP_STRUCT_SslStreamBase_FWDDECL)
#include <Modloader/app/structs/SslStreamBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslStreamBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
