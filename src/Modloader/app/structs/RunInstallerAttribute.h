#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RunInstallerAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RunInstallerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunInstallerAttribute_DEFINED)
#include <Modloader/app/structs/RunInstallerAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_RunInstallerAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_RunInstallerAttribute_DEFINED
struct RunInstallerAttribute__Class;
struct RunInstallerAttribute {
    struct RunInstallerAttribute__Class* klass;
    MonitorData* monitor;
    struct RunInstallerAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RunInstallerAttribute_FWDDECL)
#define IL2CPP_STRUCT_RunInstallerAttribute_FWDDECL
#include <Modloader/app/structs/RunInstallerAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_RunInstallerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunInstallerAttribute_DEFINED) && !defined(IL2CPP_STRUCT_RunInstallerAttribute_FWDDECL)
#include <Modloader/app/structs/RunInstallerAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RunInstallerAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
