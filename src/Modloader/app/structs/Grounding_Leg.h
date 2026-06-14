#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Grounding_Leg_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Grounding_Leg_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grounding_Leg_DEFINED)
#include <Modloader/app/structs/Grounding_Leg__Fields.h>
#if defined(IL2CPP_STRUCT_Grounding_Leg__Fields_DEFINED)
#define IL2CPP_STRUCT_Grounding_Leg_DEFINED
struct Grounding_Leg__Class;
struct Grounding_Leg {
    struct Grounding_Leg__Class* klass;
    MonitorData* monitor;
    struct Grounding_Leg__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Grounding_Leg_FWDDECL)
#define IL2CPP_STRUCT_Grounding_Leg_FWDDECL
#include <Modloader/app/structs/Grounding_Leg__Class.h>
#endif
#undef IL2CPP_STRUCT_Grounding_Leg_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grounding_Leg_DEFINED) && !defined(IL2CPP_STRUCT_Grounding_Leg_FWDDECL)
#include <Modloader/app/structs/Grounding_Leg.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Grounding_Leg.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
