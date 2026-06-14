#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TwirlSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TwirlSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TwirlSettings_DEFINED)
#include <Modloader/app/structs/TwirlSettings__Fields.h>
#if defined(IL2CPP_STRUCT_TwirlSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_TwirlSettings_DEFINED
struct TwirlSettings__Class;
struct TwirlSettings {
    struct TwirlSettings__Class* klass;
    MonitorData* monitor;
    struct TwirlSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TwirlSettings_FWDDECL)
#define IL2CPP_STRUCT_TwirlSettings_FWDDECL
#include <Modloader/app/structs/TwirlSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_TwirlSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TwirlSettings_DEFINED) && !defined(IL2CPP_STRUCT_TwirlSettings_FWDDECL)
#include <Modloader/app/structs/TwirlSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TwirlSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
