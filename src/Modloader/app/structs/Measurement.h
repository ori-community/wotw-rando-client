#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Measurement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Measurement_INITIALIZING
#if !defined(IL2CPP_STRUCT_Measurement_DEFINED)
#include <Modloader/app/structs/Measurement__Fields.h>
#if defined(IL2CPP_STRUCT_Measurement__Fields_DEFINED)
#define IL2CPP_STRUCT_Measurement_DEFINED
struct Measurement__Class;
struct Measurement {
    struct Measurement__Class* klass;
    MonitorData* monitor;
    struct Measurement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Measurement_FWDDECL)
#define IL2CPP_STRUCT_Measurement_FWDDECL
#include <Modloader/app/structs/Measurement__Class.h>
#endif
#undef IL2CPP_STRUCT_Measurement_INITIALIZING
#if !defined(IL2CPP_STRUCT_Measurement_DEFINED) && !defined(IL2CPP_STRUCT_Measurement_FWDDECL)
#include <Modloader/app/structs/Measurement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Measurement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
