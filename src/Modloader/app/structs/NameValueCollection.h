#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameValueCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameValueCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameValueCollection_DEFINED)
#include <Modloader/app/structs/NameValueCollection__Fields.h>
#if defined(IL2CPP_STRUCT_NameValueCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_NameValueCollection_DEFINED
struct NameValueCollection__Class;
struct NameValueCollection {
    struct NameValueCollection__Class* klass;
    MonitorData* monitor;
    struct NameValueCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameValueCollection_FWDDECL)
#define IL2CPP_STRUCT_NameValueCollection_FWDDECL
#include <Modloader/app/structs/NameValueCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_NameValueCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameValueCollection_DEFINED) && !defined(IL2CPP_STRUCT_NameValueCollection_FWDDECL)
#include <Modloader/app/structs/NameValueCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameValueCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
