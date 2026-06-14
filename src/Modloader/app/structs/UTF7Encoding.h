#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UTF7Encoding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UTF7Encoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF7Encoding_DEFINED)
#include <Modloader/app/structs/UTF7Encoding__Fields.h>
#if defined(IL2CPP_STRUCT_UTF7Encoding__Fields_DEFINED)
#define IL2CPP_STRUCT_UTF7Encoding_DEFINED
struct UTF7Encoding__Class;
struct UTF7Encoding {
    struct UTF7Encoding__Class* klass;
    MonitorData* monitor;
    struct UTF7Encoding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UTF7Encoding_FWDDECL)
#define IL2CPP_STRUCT_UTF7Encoding_FWDDECL
#include <Modloader/app/structs/UTF7Encoding__Class.h>
#endif
#undef IL2CPP_STRUCT_UTF7Encoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_UTF7Encoding_DEFINED) && !defined(IL2CPP_STRUCT_UTF7Encoding_FWDDECL)
#include <Modloader/app/structs/UTF7Encoding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UTF7Encoding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
