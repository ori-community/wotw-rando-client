#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContrastGain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContrastGain_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastGain_DEFINED)
#include <Modloader/app/structs/ContrastGain__Fields.h>
#if defined(IL2CPP_STRUCT_ContrastGain__Fields_DEFINED)
#define IL2CPP_STRUCT_ContrastGain_DEFINED
struct ContrastGain__Class;
struct ContrastGain {
    struct ContrastGain__Class* klass;
    MonitorData* monitor;
    struct ContrastGain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContrastGain_FWDDECL)
#define IL2CPP_STRUCT_ContrastGain_FWDDECL
#include <Modloader/app/structs/ContrastGain__Class.h>
#endif
#undef IL2CPP_STRUCT_ContrastGain_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastGain_DEFINED) && !defined(IL2CPP_STRUCT_ContrastGain_FWDDECL)
#include <Modloader/app/structs/ContrastGain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContrastGain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
