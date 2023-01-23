#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HMACRIPEMD160_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HMACRIPEMD160_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMACRIPEMD160_DEFINED)
#include <Modloader/app/structs/HMACRIPEMD160__Fields.h>
#if defined(IL2CPP_STRUCT_HMACRIPEMD160__Fields_DEFINED)
#define IL2CPP_STRUCT_HMACRIPEMD160_DEFINED
struct HMACRIPEMD160__Class;
struct HMACRIPEMD160 {
    struct HMACRIPEMD160__Class* klass;
    MonitorData* monitor;
    struct HMACRIPEMD160__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HMACRIPEMD160_FWDDECL)
#define IL2CPP_STRUCT_HMACRIPEMD160_FWDDECL
#include <Modloader/app/structs/HMACRIPEMD160__Class.h>
#endif
#undef IL2CPP_STRUCT_HMACRIPEMD160_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMACRIPEMD160_DEFINED) && !defined(IL2CPP_STRUCT_HMACRIPEMD160_FWDDECL)
#include <Modloader/app/structs/HMACRIPEMD160.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HMACRIPEMD160.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
