#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MechSpiderLeg_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MechSpiderLeg_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpiderLeg_DEFINED)
#include <Modloader/app/structs/MechSpiderLeg__Fields.h>
#if defined(IL2CPP_STRUCT_MechSpiderLeg__Fields_DEFINED)
#define IL2CPP_STRUCT_MechSpiderLeg_DEFINED
struct MechSpiderLeg__Class;
struct MechSpiderLeg {
    struct MechSpiderLeg__Class* klass;
    MonitorData* monitor;
    struct MechSpiderLeg__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MechSpiderLeg_FWDDECL)
#define IL2CPP_STRUCT_MechSpiderLeg_FWDDECL
#include <Modloader/app/structs/MechSpiderLeg__Class.h>
#endif
#undef IL2CPP_STRUCT_MechSpiderLeg_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpiderLeg_DEFINED) && !defined(IL2CPP_STRUCT_MechSpiderLeg_FWDDECL)
#include <Modloader/app/structs/MechSpiderLeg.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MechSpiderLeg.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
