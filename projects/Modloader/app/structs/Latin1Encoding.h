#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Latin1Encoding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Latin1Encoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_Latin1Encoding_DEFINED)
#include <Modloader/app/structs/Latin1Encoding__Fields.h>
#if defined(IL2CPP_STRUCT_Latin1Encoding__Fields_DEFINED)
#define IL2CPP_STRUCT_Latin1Encoding_DEFINED
struct Latin1Encoding__Class;
struct Latin1Encoding {
    struct Latin1Encoding__Class* klass;
    MonitorData* monitor;
    struct Latin1Encoding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Latin1Encoding_FWDDECL)
#define IL2CPP_STRUCT_Latin1Encoding_FWDDECL
#include <Modloader/app/structs/Latin1Encoding__Class.h>
#endif
#undef IL2CPP_STRUCT_Latin1Encoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_Latin1Encoding_DEFINED) && !defined(IL2CPP_STRUCT_Latin1Encoding_FWDDECL)
#include <Modloader/app/structs/Latin1Encoding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Latin1Encoding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
