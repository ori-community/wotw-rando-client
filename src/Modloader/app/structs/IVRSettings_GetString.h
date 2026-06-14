#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSettings_GetString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSettings_GetString_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_GetString_DEFINED)
#include <Modloader/app/structs/IVRSettings_GetString__Fields.h>
#if defined(IL2CPP_STRUCT_IVRSettings_GetString__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRSettings_GetString_DEFINED
struct IVRSettings_GetString__Class;
struct IVRSettings_GetString {
    struct IVRSettings_GetString__Class* klass;
    MonitorData* monitor;
    struct IVRSettings_GetString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRSettings_GetString_FWDDECL)
#define IL2CPP_STRUCT_IVRSettings_GetString_FWDDECL
#include <Modloader/app/structs/IVRSettings_GetString__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRSettings_GetString_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_GetString_DEFINED) && !defined(IL2CPP_STRUCT_IVRSettings_GetString_FWDDECL)
#include <Modloader/app/structs/IVRSettings_GetString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSettings_GetString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
