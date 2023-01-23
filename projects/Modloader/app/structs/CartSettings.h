#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartSettings_DEFINED)
#include <Modloader/app/structs/CartSettings__Fields.h>
#if defined(IL2CPP_STRUCT_CartSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_CartSettings_DEFINED
struct CartSettings__Class;
struct CartSettings {
    struct CartSettings__Class* klass;
    MonitorData* monitor;
    struct CartSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartSettings_FWDDECL)
#define IL2CPP_STRUCT_CartSettings_FWDDECL
#include <Modloader/app/structs/CartSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_CartSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartSettings_DEFINED) && !defined(IL2CPP_STRUCT_CartSettings_FWDDECL)
#include <Modloader/app/structs/CartSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
