#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShellShatterEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShellShatterEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShellShatterEffect_DEFINED)
#include <Modloader/app/structs/ShellShatterEffect__Fields.h>
#if defined(IL2CPP_STRUCT_ShellShatterEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_ShellShatterEffect_DEFINED
struct ShellShatterEffect__Class;
struct ShellShatterEffect {
    struct ShellShatterEffect__Class* klass;
    MonitorData* monitor;
    struct ShellShatterEffect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShellShatterEffect_FWDDECL)
#define IL2CPP_STRUCT_ShellShatterEffect_FWDDECL
#include <Modloader/app/structs/ShellShatterEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_ShellShatterEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShellShatterEffect_DEFINED) && !defined(IL2CPP_STRUCT_ShellShatterEffect_FWDDECL)
#include <Modloader/app/structs/ShellShatterEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShellShatterEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
