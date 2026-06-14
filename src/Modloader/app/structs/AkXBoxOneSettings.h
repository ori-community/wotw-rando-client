#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkXBoxOneSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkXBoxOneSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkXBoxOneSettings_DEFINED)
#include <Modloader/app/structs/AkXBoxOneSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkXBoxOneSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkXBoxOneSettings_DEFINED
struct AkXBoxOneSettings__Class;
struct AkXBoxOneSettings {
    struct AkXBoxOneSettings__Class* klass;
    MonitorData* monitor;
    struct AkXBoxOneSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkXBoxOneSettings_FWDDECL)
#define IL2CPP_STRUCT_AkXBoxOneSettings_FWDDECL
#include <Modloader/app/structs/AkXBoxOneSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkXBoxOneSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkXBoxOneSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkXBoxOneSettings_FWDDECL)
#include <Modloader/app/structs/AkXBoxOneSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkXBoxOneSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
