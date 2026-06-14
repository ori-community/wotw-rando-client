#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkSettingsValidationHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkSettingsValidationHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSettingsValidationHandler_DEFINED)
#define IL2CPP_STRUCT_AkSettingsValidationHandler_DEFINED
struct AkSettingsValidationHandler__Class;
struct AkSettingsValidationHandler {
    struct AkSettingsValidationHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AkSettingsValidationHandler_FWDDECL)
#define IL2CPP_STRUCT_AkSettingsValidationHandler_FWDDECL
#include <Modloader/app/structs/AkSettingsValidationHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_AkSettingsValidationHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSettingsValidationHandler_DEFINED) && !defined(IL2CPP_STRUCT_AkSettingsValidationHandler_FWDDECL)
#include <Modloader/app/structs/AkSettingsValidationHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkSettingsValidationHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
