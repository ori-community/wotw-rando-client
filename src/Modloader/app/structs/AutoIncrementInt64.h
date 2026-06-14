#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoIncrementInt64_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoIncrementInt64_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoIncrementInt64_DEFINED)
#include <Modloader/app/structs/AutoIncrementInt64__Fields.h>
#if defined(IL2CPP_STRUCT_AutoIncrementInt64__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoIncrementInt64_DEFINED
struct AutoIncrementInt64__Class;
struct AutoIncrementInt64 {
    struct AutoIncrementInt64__Class* klass;
    MonitorData* monitor;
    struct AutoIncrementInt64__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoIncrementInt64_FWDDECL)
#define IL2CPP_STRUCT_AutoIncrementInt64_FWDDECL
#include <Modloader/app/structs/AutoIncrementInt64__Class.h>
#endif
#undef IL2CPP_STRUCT_AutoIncrementInt64_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoIncrementInt64_DEFINED) && !defined(IL2CPP_STRUCT_AutoIncrementInt64_FWDDECL)
#include <Modloader/app/structs/AutoIncrementInt64.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoIncrementInt64.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
