#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstallerTypeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstallerTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstallerTypeAttribute_DEFINED)
#include <Modloader/app/structs/InstallerTypeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_InstallerTypeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_InstallerTypeAttribute_DEFINED
struct InstallerTypeAttribute__Class;
struct InstallerTypeAttribute {
    struct InstallerTypeAttribute__Class* klass;
    MonitorData* monitor;
    struct InstallerTypeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstallerTypeAttribute_FWDDECL)
#define IL2CPP_STRUCT_InstallerTypeAttribute_FWDDECL
#include <Modloader/app/structs/InstallerTypeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_InstallerTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstallerTypeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_InstallerTypeAttribute_FWDDECL)
#include <Modloader/app/structs/InstallerTypeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstallerTypeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
