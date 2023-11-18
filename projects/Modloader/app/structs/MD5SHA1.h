#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MD5SHA1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MD5SHA1_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD5SHA1_DEFINED)
#include <Modloader/app/structs/MD5SHA1__Fields.h>
#if defined(IL2CPP_STRUCT_MD5SHA1__Fields_DEFINED)
#define IL2CPP_STRUCT_MD5SHA1_DEFINED
struct MD5SHA1__Class;
struct MD5SHA1 {
    struct MD5SHA1__Class* klass;
    MonitorData* monitor;
    struct MD5SHA1__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MD5SHA1_FWDDECL)
#define IL2CPP_STRUCT_MD5SHA1_FWDDECL
#include <Modloader/app/structs/MD5SHA1__Class.h>
#endif
#undef IL2CPP_STRUCT_MD5SHA1_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD5SHA1_DEFINED) && !defined(IL2CPP_STRUCT_MD5SHA1_FWDDECL)
#include <Modloader/app/structs/MD5SHA1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MD5SHA1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
