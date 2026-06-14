#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MD4_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MD4_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD4_DEFINED)
#include <Modloader/app/structs/MD4__Fields.h>
#if defined(IL2CPP_STRUCT_MD4__Fields_DEFINED)
#define IL2CPP_STRUCT_MD4_DEFINED
struct MD4__Class;
struct MD4 {
    struct MD4__Class* klass;
    MonitorData* monitor;
    struct MD4__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MD4_FWDDECL)
#define IL2CPP_STRUCT_MD4_FWDDECL
#include <Modloader/app/structs/MD4__Class.h>
#endif
#undef IL2CPP_STRUCT_MD4_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD4_DEFINED) && !defined(IL2CPP_STRUCT_MD4_FWDDECL)
#include <Modloader/app/structs/MD4.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MD4.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
