#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterestSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterestSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterestSettings_DEFINED)
#include <Modloader/app/structs/InterestSettings__Fields.h>
#if defined(IL2CPP_STRUCT_InterestSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_InterestSettings_DEFINED
struct InterestSettings__Class;
struct InterestSettings {
    struct InterestSettings__Class* klass;
    MonitorData* monitor;
    struct InterestSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InterestSettings_FWDDECL)
#define IL2CPP_STRUCT_InterestSettings_FWDDECL
#include <Modloader/app/structs/InterestSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_InterestSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterestSettings_DEFINED) && !defined(IL2CPP_STRUCT_InterestSettings_FWDDECL)
#include <Modloader/app/structs/InterestSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterestSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
