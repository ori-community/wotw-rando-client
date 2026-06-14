#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoIncrementBigInteger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoIncrementBigInteger_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoIncrementBigInteger_DEFINED)
#include <Modloader/app/structs/AutoIncrementBigInteger__Fields.h>
#if defined(IL2CPP_STRUCT_AutoIncrementBigInteger__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoIncrementBigInteger_DEFINED
struct AutoIncrementBigInteger__Class;
struct AutoIncrementBigInteger {
    struct AutoIncrementBigInteger__Class* klass;
    MonitorData* monitor;
    struct AutoIncrementBigInteger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoIncrementBigInteger_FWDDECL)
#define IL2CPP_STRUCT_AutoIncrementBigInteger_FWDDECL
#include <Modloader/app/structs/AutoIncrementBigInteger__Class.h>
#endif
#undef IL2CPP_STRUCT_AutoIncrementBigInteger_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoIncrementBigInteger_DEFINED) && !defined(IL2CPP_STRUCT_AutoIncrementBigInteger_FWDDECL)
#include <Modloader/app/structs/AutoIncrementBigInteger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoIncrementBigInteger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
