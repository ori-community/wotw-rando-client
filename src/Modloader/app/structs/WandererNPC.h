#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererNPC_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererNPC_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererNPC_DEFINED)
#include <Modloader/app/structs/WandererNPC__Fields.h>
#if defined(IL2CPP_STRUCT_WandererNPC__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererNPC_DEFINED
struct WandererNPC__Class;
struct WandererNPC {
    struct WandererNPC__Class* klass;
    MonitorData* monitor;
    struct WandererNPC__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererNPC_FWDDECL)
#define IL2CPP_STRUCT_WandererNPC_FWDDECL
#include <Modloader/app/structs/WandererNPC__Class.h>
#endif
#undef IL2CPP_STRUCT_WandererNPC_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererNPC_DEFINED) && !defined(IL2CPP_STRUCT_WandererNPC_FWDDECL)
#include <Modloader/app/structs/WandererNPC.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererNPC.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
