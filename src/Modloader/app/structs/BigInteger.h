#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BigInteger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BigInteger_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger_DEFINED)
#include <Modloader/app/structs/BigInteger__Fields.h>
#if defined(IL2CPP_STRUCT_BigInteger__Fields_DEFINED)
#define IL2CPP_STRUCT_BigInteger_DEFINED
struct BigInteger__Class;
struct BigInteger {
    struct BigInteger__Class* klass;
    MonitorData* monitor;
    struct BigInteger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BigInteger_FWDDECL)
#define IL2CPP_STRUCT_BigInteger_FWDDECL
#include <Modloader/app/structs/BigInteger__Class.h>
#endif
#undef IL2CPP_STRUCT_BigInteger_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger_DEFINED) && !defined(IL2CPP_STRUCT_BigInteger_FWDDECL)
#include <Modloader/app/structs/BigInteger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BigInteger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
