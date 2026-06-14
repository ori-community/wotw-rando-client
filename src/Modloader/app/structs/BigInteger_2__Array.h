#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BigInteger_2__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BigInteger_2__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger_2__Array_DEFINED)
#include <Modloader/app/structs/BigInteger_2.h>
#if defined(IL2CPP_STRUCT_BigInteger_2_DEFINED)
#define IL2CPP_STRUCT_BigInteger_2__Array_DEFINED
struct BigInteger_2__Array__Class;
struct BigInteger_2__Array {
    struct BigInteger_2__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct BigInteger_2 vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BigInteger_2__Array_FWDDECL)
#define IL2CPP_STRUCT_BigInteger_2__Array_FWDDECL
#include <Modloader/app/structs/BigInteger_2__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_BigInteger_2__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger_2__Array_DEFINED) && !defined(IL2CPP_STRUCT_BigInteger_2__Array_FWDDECL)
#include <Modloader/app/structs/BigInteger_2__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BigInteger_2__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
