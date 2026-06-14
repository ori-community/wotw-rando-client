#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HMACMD5_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HMACMD5_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMACMD5_DEFINED)
#include <Modloader/app/structs/HMACMD5__Fields.h>
#if defined(IL2CPP_STRUCT_HMACMD5__Fields_DEFINED)
#define IL2CPP_STRUCT_HMACMD5_DEFINED
struct HMACMD5__Class;
struct HMACMD5 {
    struct HMACMD5__Class* klass;
    MonitorData* monitor;
    struct HMACMD5__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HMACMD5_FWDDECL)
#define IL2CPP_STRUCT_HMACMD5_FWDDECL
#include <Modloader/app/structs/HMACMD5__Class.h>
#endif
#undef IL2CPP_STRUCT_HMACMD5_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMACMD5_DEFINED) && !defined(IL2CPP_STRUCT_HMACMD5_FWDDECL)
#include <Modloader/app/structs/HMACMD5.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HMACMD5.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
