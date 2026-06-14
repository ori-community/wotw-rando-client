#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSettings_SetBool_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSettings_SetBool_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_SetBool_DEFINED)
#include <Modloader/app/structs/IVRSettings_SetBool__Fields.h>
#if defined(IL2CPP_STRUCT_IVRSettings_SetBool__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRSettings_SetBool_DEFINED
struct IVRSettings_SetBool__Class;
struct IVRSettings_SetBool {
    struct IVRSettings_SetBool__Class* klass;
    MonitorData* monitor;
    struct IVRSettings_SetBool__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRSettings_SetBool_FWDDECL)
#define IL2CPP_STRUCT_IVRSettings_SetBool_FWDDECL
#include <Modloader/app/structs/IVRSettings_SetBool__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRSettings_SetBool_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_SetBool_DEFINED) && !defined(IL2CPP_STRUCT_IVRSettings_SetBool_FWDDECL)
#include <Modloader/app/structs/IVRSettings_SetBool.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSettings_SetBool.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
