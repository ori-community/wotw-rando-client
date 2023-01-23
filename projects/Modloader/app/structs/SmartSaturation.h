#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmartSaturation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmartSaturation_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmartSaturation_DEFINED)
#include <Modloader/app/structs/SmartSaturation__Fields.h>
#if defined(IL2CPP_STRUCT_SmartSaturation__Fields_DEFINED)
#define IL2CPP_STRUCT_SmartSaturation_DEFINED
struct SmartSaturation__Class;
struct SmartSaturation {
    struct SmartSaturation__Class* klass;
    MonitorData* monitor;
    struct SmartSaturation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SmartSaturation_FWDDECL)
#define IL2CPP_STRUCT_SmartSaturation_FWDDECL
#include <Modloader/app/structs/SmartSaturation__Class.h>
#endif
#undef IL2CPP_STRUCT_SmartSaturation_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmartSaturation_DEFINED) && !defined(IL2CPP_STRUCT_SmartSaturation_FWDDECL)
#include <Modloader/app/structs/SmartSaturation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmartSaturation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
