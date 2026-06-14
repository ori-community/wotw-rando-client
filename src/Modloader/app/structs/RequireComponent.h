#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequireComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequireComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequireComponent_DEFINED)
#include <Modloader/app/structs/RequireComponent__Fields.h>
#if defined(IL2CPP_STRUCT_RequireComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_RequireComponent_DEFINED
struct RequireComponent__Class;
struct RequireComponent {
    struct RequireComponent__Class* klass;
    MonitorData* monitor;
    struct RequireComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RequireComponent_FWDDECL)
#define IL2CPP_STRUCT_RequireComponent_FWDDECL
#include <Modloader/app/structs/RequireComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_RequireComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequireComponent_DEFINED) && !defined(IL2CPP_STRUCT_RequireComponent_FWDDECL)
#include <Modloader/app/structs/RequireComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequireComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
