#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameValueHeaderValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameValueHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameValueHeaderValue_DEFINED)
#include <Modloader/app/structs/NameValueHeaderValue__Fields.h>
#if defined(IL2CPP_STRUCT_NameValueHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_NameValueHeaderValue_DEFINED
struct NameValueHeaderValue__Class;
struct NameValueHeaderValue {
    struct NameValueHeaderValue__Class* klass;
    MonitorData* monitor;
    struct NameValueHeaderValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameValueHeaderValue_FWDDECL)
#define IL2CPP_STRUCT_NameValueHeaderValue_FWDDECL
#include <Modloader/app/structs/NameValueHeaderValue__Class.h>
#endif
#undef IL2CPP_STRUCT_NameValueHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameValueHeaderValue_DEFINED) && !defined(IL2CPP_STRUCT_NameValueHeaderValue_FWDDECL)
#include <Modloader/app/structs/NameValueHeaderValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameValueHeaderValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
