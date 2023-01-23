#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MD5_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MD5_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD5_DEFINED)
#include <Modloader/app/structs/MD5__Fields.h>
#if defined(IL2CPP_STRUCT_MD5__Fields_DEFINED)
#define IL2CPP_STRUCT_MD5_DEFINED
struct MD5__Class;
struct MD5 {
    struct MD5__Class* klass;
    MonitorData* monitor;
    struct MD5__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MD5_FWDDECL)
#define IL2CPP_STRUCT_MD5_FWDDECL
#include <Modloader/app/structs/MD5__Class.h>
#endif
#undef IL2CPP_STRUCT_MD5_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD5_DEFINED) && !defined(IL2CPP_STRUCT_MD5_FWDDECL)
#include <Modloader/app/structs/MD5.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MD5.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
