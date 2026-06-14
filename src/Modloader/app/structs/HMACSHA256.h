#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HMACSHA256_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HMACSHA256_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMACSHA256_DEFINED)
#include <Modloader/app/structs/HMACSHA256__Fields.h>
#if defined(IL2CPP_STRUCT_HMACSHA256__Fields_DEFINED)
#define IL2CPP_STRUCT_HMACSHA256_DEFINED
struct HMACSHA256__Class;
struct HMACSHA256 {
    struct HMACSHA256__Class* klass;
    MonitorData* monitor;
    struct HMACSHA256__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HMACSHA256_FWDDECL)
#define IL2CPP_STRUCT_HMACSHA256_FWDDECL
#include <Modloader/app/structs/HMACSHA256__Class.h>
#endif
#undef IL2CPP_STRUCT_HMACSHA256_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMACSHA256_DEFINED) && !defined(IL2CPP_STRUCT_HMACSHA256_FWDDECL)
#include <Modloader/app/structs/HMACSHA256.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HMACSHA256.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
