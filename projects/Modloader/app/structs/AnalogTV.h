#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnalogTV_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnalogTV_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnalogTV_DEFINED)
#include <Modloader/app/structs/AnalogTV__Fields.h>
#if defined(IL2CPP_STRUCT_AnalogTV__Fields_DEFINED)
#define IL2CPP_STRUCT_AnalogTV_DEFINED
struct AnalogTV__Class;
struct AnalogTV {
    struct AnalogTV__Class* klass;
    MonitorData* monitor;
    struct AnalogTV__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnalogTV_FWDDECL)
#define IL2CPP_STRUCT_AnalogTV_FWDDECL
#include <Modloader/app/structs/AnalogTV__Class.h>
#endif
#undef IL2CPP_STRUCT_AnalogTV_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnalogTV_DEFINED) && !defined(IL2CPP_STRUCT_AnalogTV_FWDDECL)
#include <Modloader/app/structs/AnalogTV.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnalogTV.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
