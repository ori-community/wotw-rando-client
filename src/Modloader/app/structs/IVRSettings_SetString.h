#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSettings_SetString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSettings_SetString_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_SetString_DEFINED)
#include <Modloader/app/structs/IVRSettings_SetString__Fields.h>
#if defined(IL2CPP_STRUCT_IVRSettings_SetString__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRSettings_SetString_DEFINED
struct IVRSettings_SetString__Class;
struct IVRSettings_SetString {
    struct IVRSettings_SetString__Class* klass;
    MonitorData* monitor;
    struct IVRSettings_SetString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRSettings_SetString_FWDDECL)
#define IL2CPP_STRUCT_IVRSettings_SetString_FWDDECL
#include <Modloader/app/structs/IVRSettings_SetString__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRSettings_SetString_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_SetString_DEFINED) && !defined(IL2CPP_STRUCT_IVRSettings_SetString_FWDDECL)
#include <Modloader/app/structs/IVRSettings_SetString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSettings_SetString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
