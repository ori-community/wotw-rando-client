#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HMACSHA384_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HMACSHA384_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMACSHA384_DEFINED)
#include <Modloader/app/structs/HMACSHA384__Fields.h>
#if defined(IL2CPP_STRUCT_HMACSHA384__Fields_DEFINED)
#define IL2CPP_STRUCT_HMACSHA384_DEFINED
struct HMACSHA384__Class;
struct HMACSHA384 {
    struct HMACSHA384__Class* klass;
    MonitorData* monitor;
    struct HMACSHA384__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HMACSHA384_FWDDECL)
#define IL2CPP_STRUCT_HMACSHA384_FWDDECL
#include <Modloader/app/structs/HMACSHA384__Class.h>
#endif
#undef IL2CPP_STRUCT_HMACSHA384_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMACSHA384_DEFINED) && !defined(IL2CPP_STRUCT_HMACSHA384_FWDDECL)
#include <Modloader/app/structs/HMACSHA384.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HMACSHA384.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
