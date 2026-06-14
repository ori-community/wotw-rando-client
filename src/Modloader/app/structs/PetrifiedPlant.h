#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedPlant_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedPlant_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedPlant_DEFINED)
#include <Modloader/app/structs/PetrifiedPlant__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedPlant__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedPlant_DEFINED
struct PetrifiedPlant__Class;
struct PetrifiedPlant {
    struct PetrifiedPlant__Class* klass;
    MonitorData* monitor;
    struct PetrifiedPlant__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedPlant_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedPlant_FWDDECL
#include <Modloader/app/structs/PetrifiedPlant__Class.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedPlant_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedPlant_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedPlant_FWDDECL)
#include <Modloader/app/structs/PetrifiedPlant.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedPlant.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
