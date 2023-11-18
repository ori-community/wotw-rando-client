#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RIPEMD160_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RIPEMD160_INITIALIZING
#if !defined(IL2CPP_STRUCT_RIPEMD160_DEFINED)
#include <Modloader/app/structs/RIPEMD160__Fields.h>
#if defined(IL2CPP_STRUCT_RIPEMD160__Fields_DEFINED)
#define IL2CPP_STRUCT_RIPEMD160_DEFINED
struct RIPEMD160__Class;
struct RIPEMD160 {
    struct RIPEMD160__Class* klass;
    MonitorData* monitor;
    struct RIPEMD160__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RIPEMD160_FWDDECL)
#define IL2CPP_STRUCT_RIPEMD160_FWDDECL
#include <Modloader/app/structs/RIPEMD160__Class.h>
#endif
#undef IL2CPP_STRUCT_RIPEMD160_INITIALIZING
#if !defined(IL2CPP_STRUCT_RIPEMD160_DEFINED) && !defined(IL2CPP_STRUCT_RIPEMD160_FWDDECL)
#include <Modloader/app/structs/RIPEMD160.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RIPEMD160.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
