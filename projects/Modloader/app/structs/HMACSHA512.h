#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HMACSHA512_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HMACSHA512_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMACSHA512_DEFINED)
#include <Modloader/app/structs/HMACSHA512__Fields.h>
#if defined(IL2CPP_STRUCT_HMACSHA512__Fields_DEFINED)
#define IL2CPP_STRUCT_HMACSHA512_DEFINED
struct HMACSHA512__Class;
struct HMACSHA512 {
    struct HMACSHA512__Class* klass;
    MonitorData* monitor;
    struct HMACSHA512__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HMACSHA512_FWDDECL)
#define IL2CPP_STRUCT_HMACSHA512_FWDDECL
#include <Modloader/app/structs/HMACSHA512__Class.h>
#endif
#undef IL2CPP_STRUCT_HMACSHA512_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMACSHA512_DEFINED) && !defined(IL2CPP_STRUCT_HMACSHA512_FWDDECL)
#include <Modloader/app/structs/HMACSHA512.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HMACSHA512.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
