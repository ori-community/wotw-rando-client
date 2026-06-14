#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlipPlantLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlipPlantLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlipPlantLogic_DEFINED)
#include <Modloader/app/structs/FlipPlantLogic__Fields.h>
#if defined(IL2CPP_STRUCT_FlipPlantLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_FlipPlantLogic_DEFINED
struct FlipPlantLogic__Class;
struct FlipPlantLogic {
    struct FlipPlantLogic__Class* klass;
    MonitorData* monitor;
    struct FlipPlantLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlipPlantLogic_FWDDECL)
#define IL2CPP_STRUCT_FlipPlantLogic_FWDDECL
#include <Modloader/app/structs/FlipPlantLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_FlipPlantLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlipPlantLogic_DEFINED) && !defined(IL2CPP_STRUCT_FlipPlantLogic_FWDDECL)
#include <Modloader/app/structs/FlipPlantLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlipPlantLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
