#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IdleOverride_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IdleOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdleOverride_DEFINED)
#include <Modloader/app/structs/IdleOverride__Fields.h>
#if defined(IL2CPP_STRUCT_IdleOverride__Fields_DEFINED)
#define IL2CPP_STRUCT_IdleOverride_DEFINED
struct IdleOverride__Class;
struct IdleOverride {
    struct IdleOverride__Class* klass;
    MonitorData* monitor;
    struct IdleOverride__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IdleOverride_FWDDECL)
#define IL2CPP_STRUCT_IdleOverride_FWDDECL
#include <Modloader/app/structs/IdleOverride__Class.h>
#endif
#undef IL2CPP_STRUCT_IdleOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdleOverride_DEFINED) && !defined(IL2CPP_STRUCT_IdleOverride_FWDDECL)
#include <Modloader/app/structs/IdleOverride.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IdleOverride.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
