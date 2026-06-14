#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BigInteger_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BigInteger_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger_1_DEFINED)
#include <Modloader/app/structs/BigInteger_1__Fields.h>
#if defined(IL2CPP_STRUCT_BigInteger_1__Fields_DEFINED)
#define IL2CPP_STRUCT_BigInteger_1_DEFINED
struct BigInteger_1__Class;
struct BigInteger_1 {
    struct BigInteger_1__Class* klass;
    MonitorData* monitor;
    struct BigInteger_1__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BigInteger_1_FWDDECL)
#define IL2CPP_STRUCT_BigInteger_1_FWDDECL
#include <Modloader/app/structs/BigInteger_1__Class.h>
#endif
#undef IL2CPP_STRUCT_BigInteger_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger_1_DEFINED) && !defined(IL2CPP_STRUCT_BigInteger_1_FWDDECL)
#include <Modloader/app/structs/BigInteger_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BigInteger_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
