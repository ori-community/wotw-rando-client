#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererNPC_InteractionLine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererNPC_InteractionLine_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererNPC_InteractionLine_DEFINED)
#include <Modloader/app/structs/WandererNPC_InteractionLine__Fields.h>
#if defined(IL2CPP_STRUCT_WandererNPC_InteractionLine__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererNPC_InteractionLine_DEFINED
struct WandererNPC_InteractionLine__Class;
struct WandererNPC_InteractionLine {
    struct WandererNPC_InteractionLine__Class* klass;
    MonitorData* monitor;
    struct WandererNPC_InteractionLine__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererNPC_InteractionLine_FWDDECL)
#define IL2CPP_STRUCT_WandererNPC_InteractionLine_FWDDECL
#include <Modloader/app/structs/WandererNPC_InteractionLine__Class.h>
#endif
#undef IL2CPP_STRUCT_WandererNPC_InteractionLine_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererNPC_InteractionLine_DEFINED) && !defined(IL2CPP_STRUCT_WandererNPC_InteractionLine_FWDDECL)
#include <Modloader/app/structs/WandererNPC_InteractionLine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererNPC_InteractionLine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
