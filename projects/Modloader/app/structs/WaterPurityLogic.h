#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterPurityLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterPurityLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPurityLogic_DEFINED)
#include <Modloader/app/structs/WaterPurityLogic__Fields.h>
#if defined(IL2CPP_STRUCT_WaterPurityLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterPurityLogic_DEFINED
struct WaterPurityLogic__Class;
struct WaterPurityLogic {
    struct WaterPurityLogic__Class* klass;
    MonitorData* monitor;
    struct WaterPurityLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterPurityLogic_FWDDECL)
#define IL2CPP_STRUCT_WaterPurityLogic_FWDDECL
#include <Modloader/app/structs/WaterPurityLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterPurityLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPurityLogic_DEFINED) && !defined(IL2CPP_STRUCT_WaterPurityLogic_FWDDECL)
#include <Modloader/app/structs/WaterPurityLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterPurityLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
