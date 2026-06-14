#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VersionNotFoundException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VersionNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_VersionNotFoundException_DEFINED)
#include <Modloader/app/structs/VersionNotFoundException__Fields.h>
#if defined(IL2CPP_STRUCT_VersionNotFoundException__Fields_DEFINED)
#define IL2CPP_STRUCT_VersionNotFoundException_DEFINED
struct VersionNotFoundException__Class;
struct VersionNotFoundException {
    struct VersionNotFoundException__Class* klass;
    MonitorData* monitor;
    struct VersionNotFoundException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VersionNotFoundException_FWDDECL)
#define IL2CPP_STRUCT_VersionNotFoundException_FWDDECL
#include <Modloader/app/structs/VersionNotFoundException__Class.h>
#endif
#undef IL2CPP_STRUCT_VersionNotFoundException_INITIALIZING
#if !defined(IL2CPP_STRUCT_VersionNotFoundException_DEFINED) && !defined(IL2CPP_STRUCT_VersionNotFoundException_FWDDECL)
#include <Modloader/app/structs/VersionNotFoundException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VersionNotFoundException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
