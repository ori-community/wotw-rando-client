#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldMapLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldMapLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapLogic_DEFINED)
#include <Modloader/app/structs/WorldMapLogic__Fields.h>
#if defined(IL2CPP_STRUCT_WorldMapLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldMapLogic_DEFINED
struct WorldMapLogic__Class;
struct WorldMapLogic {
    struct WorldMapLogic__Class* klass;
    MonitorData* monitor;
    struct WorldMapLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldMapLogic_FWDDECL)
#define IL2CPP_STRUCT_WorldMapLogic_FWDDECL
#include <Modloader/app/structs/WorldMapLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldMapLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapLogic_DEFINED) && !defined(IL2CPP_STRUCT_WorldMapLogic_FWDDECL)
#include <Modloader/app/structs/WorldMapLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldMapLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
