#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoIncrementValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoIncrementValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoIncrementValue_DEFINED)
#include <Modloader/app/structs/AutoIncrementValue__Fields.h>
#if defined(IL2CPP_STRUCT_AutoIncrementValue__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoIncrementValue_DEFINED
struct AutoIncrementValue__Class;
struct AutoIncrementValue {
    struct AutoIncrementValue__Class* klass;
    MonitorData* monitor;
    struct AutoIncrementValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoIncrementValue_FWDDECL)
#define IL2CPP_STRUCT_AutoIncrementValue_FWDDECL
#include <Modloader/app/structs/AutoIncrementValue__Class.h>
#endif
#undef IL2CPP_STRUCT_AutoIncrementValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoIncrementValue_DEFINED) && !defined(IL2CPP_STRUCT_AutoIncrementValue_FWDDECL)
#include <Modloader/app/structs/AutoIncrementValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoIncrementValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
