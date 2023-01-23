#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bank_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bank_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bank_DEFINED)
#include <Modloader/app/structs/Bank__Fields.h>
#if defined(IL2CPP_STRUCT_Bank__Fields_DEFINED)
#define IL2CPP_STRUCT_Bank_DEFINED
struct Bank__Class;
struct Bank {
    struct Bank__Class* klass;
    MonitorData* monitor;
    struct Bank__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bank_FWDDECL)
#define IL2CPP_STRUCT_Bank_FWDDECL
#include <Modloader/app/structs/Bank__Class.h>
#endif
#undef IL2CPP_STRUCT_Bank_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bank_DEFINED) && !defined(IL2CPP_STRUCT_Bank_FWDDECL)
#include <Modloader/app/structs/Bank.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bank.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
