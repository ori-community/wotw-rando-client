#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WarningException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WarningException_INITIALIZING
#if !defined(IL2CPP_STRUCT_WarningException_DEFINED)
#include <Modloader/app/structs/WarningException__Fields.h>
#if defined(IL2CPP_STRUCT_WarningException__Fields_DEFINED)
#define IL2CPP_STRUCT_WarningException_DEFINED
struct WarningException__Class;
struct WarningException {
    struct WarningException__Class* klass;
    MonitorData* monitor;
    struct WarningException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WarningException_FWDDECL)
#define IL2CPP_STRUCT_WarningException_FWDDECL
#include <Modloader/app/structs/WarningException__Class.h>
#endif
#undef IL2CPP_STRUCT_WarningException_INITIALIZING
#if !defined(IL2CPP_STRUCT_WarningException_DEFINED) && !defined(IL2CPP_STRUCT_WarningException_FWDDECL)
#include <Modloader/app/structs/WarningException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WarningException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
