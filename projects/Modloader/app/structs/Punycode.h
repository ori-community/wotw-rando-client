#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Punycode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Punycode_INITIALIZING
#if !defined(IL2CPP_STRUCT_Punycode_DEFINED)
#include <Modloader/app/structs/Punycode__Fields.h>
#if defined(IL2CPP_STRUCT_Punycode__Fields_DEFINED)
#define IL2CPP_STRUCT_Punycode_DEFINED
struct Punycode__Class;
struct Punycode {
    struct Punycode__Class* klass;
    MonitorData* monitor;
    struct Punycode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Punycode_FWDDECL)
#define IL2CPP_STRUCT_Punycode_FWDDECL
#include <Modloader/app/structs/Punycode__Class.h>
#endif
#undef IL2CPP_STRUCT_Punycode_INITIALIZING
#if !defined(IL2CPP_STRUCT_Punycode_DEFINED) && !defined(IL2CPP_STRUCT_Punycode_FWDDECL)
#include <Modloader/app/structs/Punycode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Punycode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
