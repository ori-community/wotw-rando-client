#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMemSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMemSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMemSettings_DEFINED)
#include <Modloader/app/structs/AkMemSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkMemSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMemSettings_DEFINED
struct AkMemSettings__Class;
struct AkMemSettings {
    struct AkMemSettings__Class* klass;
    MonitorData* monitor;
    struct AkMemSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMemSettings_FWDDECL)
#define IL2CPP_STRUCT_AkMemSettings_FWDDECL
#include <Modloader/app/structs/AkMemSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMemSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMemSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkMemSettings_FWDDECL)
#include <Modloader/app/structs/AkMemSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMemSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
