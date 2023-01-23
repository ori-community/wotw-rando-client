#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_DEFINED)
#define IL2CPP_STRUCT_IVRSettings_DEFINED
struct IVRSettings_GetSettingsErrorNameFromEnum;
struct IVRSettings_Sync;
struct IVRSettings_SetBool;
struct IVRSettings_SetInt32;
struct IVRSettings_SetFloat;
struct IVRSettings_SetString;
struct IVRSettings_GetBool;
struct IVRSettings_GetInt32;
struct IVRSettings_GetFloat;
struct IVRSettings_GetString;
struct IVRSettings_RemoveSection;
struct IVRSettings_RemoveKeyInSection;
struct IVRSettings {
    struct IVRSettings_GetSettingsErrorNameFromEnum* GetSettingsErrorNameFromEnum;
    struct IVRSettings_Sync* Sync;
    struct IVRSettings_SetBool* SetBool;
    struct IVRSettings_SetInt32* SetInt32;
    struct IVRSettings_SetFloat* SetFloat;
    struct IVRSettings_SetString* SetString;
    struct IVRSettings_GetBool* GetBool;
    struct IVRSettings_GetInt32* GetInt32;
    struct IVRSettings_GetFloat* GetFloat;
    struct IVRSettings_GetString* GetString;
    struct IVRSettings_RemoveSection* RemoveSection;
    struct IVRSettings_RemoveKeyInSection* RemoveKeyInSection;
};
#endif
#if !defined(IL2CPP_STRUCT_IVRSettings_FWDDECL)
#define IL2CPP_STRUCT_IVRSettings_FWDDECL
#include <Modloader/app/structs/IVRSettings_GetBool.h>
#include <Modloader/app/structs/IVRSettings_GetFloat.h>
#include <Modloader/app/structs/IVRSettings_GetInt32.h>
#include <Modloader/app/structs/IVRSettings_GetSettingsErrorNameFromEnum.h>
#include <Modloader/app/structs/IVRSettings_GetString.h>
#include <Modloader/app/structs/IVRSettings_RemoveKeyInSection.h>
#include <Modloader/app/structs/IVRSettings_RemoveSection.h>
#include <Modloader/app/structs/IVRSettings_SetBool.h>
#include <Modloader/app/structs/IVRSettings_SetFloat.h>
#include <Modloader/app/structs/IVRSettings_SetInt32.h>
#include <Modloader/app/structs/IVRSettings_SetString.h>
#include <Modloader/app/structs/IVRSettings_Sync.h>
#endif
#undef IL2CPP_STRUCT_IVRSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_DEFINED) && !defined(IL2CPP_STRUCT_IVRSettings_FWDDECL)
#include <Modloader/app/structs/IVRSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
