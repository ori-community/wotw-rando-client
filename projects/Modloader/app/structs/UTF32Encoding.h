#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UTF32Encoding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UTF32Encoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF32Encoding_DEFINED)
#include <Modloader/app/structs/UTF32Encoding__Fields.h>
#if defined(IL2CPP_STRUCT_UTF32Encoding__Fields_DEFINED)
#define IL2CPP_STRUCT_UTF32Encoding_DEFINED
struct UTF32Encoding__Class;
struct UTF32Encoding {
    struct UTF32Encoding__Class* klass;
    MonitorData* monitor;
    struct UTF32Encoding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UTF32Encoding_FWDDECL)
#define IL2CPP_STRUCT_UTF32Encoding_FWDDECL
#include <Modloader/app/structs/UTF32Encoding__Class.h>
#endif
#undef IL2CPP_STRUCT_UTF32Encoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF32Encoding_DEFINED) && !defined(IL2CPP_STRUCT_UTF32Encoding_FWDDECL)
#include <Modloader/app/structs/UTF32Encoding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UTF32Encoding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
