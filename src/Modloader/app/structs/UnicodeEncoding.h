#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnicodeEncoding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnicodeEncoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnicodeEncoding_DEFINED)
#include <Modloader/app/structs/UnicodeEncoding__Fields.h>
#if defined(IL2CPP_STRUCT_UnicodeEncoding__Fields_DEFINED)
#define IL2CPP_STRUCT_UnicodeEncoding_DEFINED
struct UnicodeEncoding__Class;
struct UnicodeEncoding {
    struct UnicodeEncoding__Class* klass;
    MonitorData* monitor;
    struct UnicodeEncoding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnicodeEncoding_FWDDECL)
#define IL2CPP_STRUCT_UnicodeEncoding_FWDDECL
#include <Modloader/app/structs/UnicodeEncoding__Class.h>
#endif
#undef IL2CPP_STRUCT_UnicodeEncoding_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnicodeEncoding_DEFINED) && !defined(IL2CPP_STRUCT_UnicodeEncoding_FWDDECL)
#include <Modloader/app/structs/UnicodeEncoding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnicodeEncoding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
