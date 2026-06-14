#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WarningHeaderValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WarningHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_WarningHeaderValue_DEFINED)
#include <Modloader/app/structs/WarningHeaderValue__Fields.h>
#if defined(IL2CPP_STRUCT_WarningHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_WarningHeaderValue_DEFINED
struct WarningHeaderValue__Class;
struct WarningHeaderValue {
    struct WarningHeaderValue__Class* klass;
    MonitorData* monitor;
    struct WarningHeaderValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WarningHeaderValue_FWDDECL)
#define IL2CPP_STRUCT_WarningHeaderValue_FWDDECL
#include <Modloader/app/structs/WarningHeaderValue__Class.h>
#endif
#undef IL2CPP_STRUCT_WarningHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_WarningHeaderValue_DEFINED) && !defined(IL2CPP_STRUCT_WarningHeaderValue_FWDDECL)
#include <Modloader/app/structs/WarningHeaderValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WarningHeaderValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
