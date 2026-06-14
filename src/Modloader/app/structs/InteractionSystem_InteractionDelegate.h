#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionSystem_InteractionDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionSystem_InteractionDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionSystem_InteractionDelegate_DEFINED)
#include <Modloader/app/structs/InteractionSystem_InteractionDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionSystem_InteractionDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionSystem_InteractionDelegate_DEFINED
struct InteractionSystem_InteractionDelegate__Class;
struct InteractionSystem_InteractionDelegate {
    struct InteractionSystem_InteractionDelegate__Class* klass;
    MonitorData* monitor;
    struct InteractionSystem_InteractionDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionSystem_InteractionDelegate_FWDDECL)
#define IL2CPP_STRUCT_InteractionSystem_InteractionDelegate_FWDDECL
#include <Modloader/app/structs/InteractionSystem_InteractionDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionSystem_InteractionDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionSystem_InteractionDelegate_DEFINED) && !defined(IL2CPP_STRUCT_InteractionSystem_InteractionDelegate_FWDDECL)
#include <Modloader/app/structs/InteractionSystem_InteractionDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionSystem_InteractionDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
