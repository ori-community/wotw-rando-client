#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShellSlugEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShellSlugEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShellSlugEntity_DEFINED)
#include <Modloader/app/structs/ShellSlugEntity__Fields.h>
#if defined(IL2CPP_STRUCT_ShellSlugEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ShellSlugEntity_DEFINED
struct ShellSlugEntity__Class;
struct ShellSlugEntity {
    struct ShellSlugEntity__Class* klass;
    MonitorData* monitor;
    struct ShellSlugEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShellSlugEntity_FWDDECL)
#define IL2CPP_STRUCT_ShellSlugEntity_FWDDECL
#include <Modloader/app/structs/ShellSlugEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_ShellSlugEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShellSlugEntity_DEFINED) && !defined(IL2CPP_STRUCT_ShellSlugEntity_FWDDECL)
#include <Modloader/app/structs/ShellSlugEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShellSlugEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
