#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UTF8Encoding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UTF8Encoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF8Encoding_DEFINED)
#include <Modloader/app/structs/UTF8Encoding__Fields.h>
#if defined(IL2CPP_STRUCT_UTF8Encoding__Fields_DEFINED)
#define IL2CPP_STRUCT_UTF8Encoding_DEFINED
struct UTF8Encoding__Class;
struct UTF8Encoding {
    struct UTF8Encoding__Class* klass;
    MonitorData* monitor;
    struct UTF8Encoding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UTF8Encoding_FWDDECL)
#define IL2CPP_STRUCT_UTF8Encoding_FWDDECL
#include <Modloader/app/structs/UTF8Encoding__Class.h>
#endif
#undef IL2CPP_STRUCT_UTF8Encoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF8Encoding_DEFINED) && !defined(IL2CPP_STRUCT_UTF8Encoding_FWDDECL)
#include <Modloader/app/structs/UTF8Encoding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UTF8Encoding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
