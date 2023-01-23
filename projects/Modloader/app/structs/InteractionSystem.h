#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionSystem_DEFINED)
#include <Modloader/app/structs/InteractionSystem__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionSystem_DEFINED
struct InteractionSystem__Class;
struct InteractionSystem {
    struct InteractionSystem__Class* klass;
    MonitorData* monitor;
    struct InteractionSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionSystem_FWDDECL)
#define IL2CPP_STRUCT_InteractionSystem_FWDDECL
#include <Modloader/app/structs/InteractionSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionSystem_DEFINED) && !defined(IL2CPP_STRUCT_InteractionSystem_FWDDECL)
#include <Modloader/app/structs/InteractionSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
