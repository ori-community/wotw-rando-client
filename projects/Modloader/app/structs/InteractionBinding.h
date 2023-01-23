#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionBinding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionBinding_DEFINED)
#include <Modloader/app/structs/InteractionBinding__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionBinding__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionBinding_DEFINED
struct InteractionBinding__Class;
struct InteractionBinding {
    struct InteractionBinding__Class* klass;
    MonitorData* monitor;
    struct InteractionBinding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionBinding_FWDDECL)
#define IL2CPP_STRUCT_InteractionBinding_FWDDECL
#include <Modloader/app/structs/InteractionBinding__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionBinding_DEFINED) && !defined(IL2CPP_STRUCT_InteractionBinding_FWDDECL)
#include <Modloader/app/structs/InteractionBinding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionBinding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
