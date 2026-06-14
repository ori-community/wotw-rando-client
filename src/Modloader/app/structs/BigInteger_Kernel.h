#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BigInteger_Kernel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BigInteger_Kernel_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger_Kernel_DEFINED)
#define IL2CPP_STRUCT_BigInteger_Kernel_DEFINED
struct BigInteger_Kernel__Class;
struct BigInteger_Kernel {
    struct BigInteger_Kernel__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BigInteger_Kernel_FWDDECL)
#define IL2CPP_STRUCT_BigInteger_Kernel_FWDDECL
#include <Modloader/app/structs/BigInteger_Kernel__Class.h>
#endif
#undef IL2CPP_STRUCT_BigInteger_Kernel_INITIALIZING
#if !defined(IL2CPP_STRUCT_BigInteger_Kernel_DEFINED) && !defined(IL2CPP_STRUCT_BigInteger_Kernel_FWDDECL)
#include <Modloader/app/structs/BigInteger_Kernel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BigInteger_Kernel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
