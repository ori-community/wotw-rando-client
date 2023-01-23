#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSettings_SetFloat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSettings_SetFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_SetFloat_DEFINED)
#include <Modloader/app/structs/IVRSettings_SetFloat__Fields.h>
#if defined(IL2CPP_STRUCT_IVRSettings_SetFloat__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRSettings_SetFloat_DEFINED
struct IVRSettings_SetFloat__Class;
struct IVRSettings_SetFloat {
    struct IVRSettings_SetFloat__Class* klass;
    MonitorData* monitor;
    struct IVRSettings_SetFloat__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRSettings_SetFloat_FWDDECL)
#define IL2CPP_STRUCT_IVRSettings_SetFloat_FWDDECL
#include <Modloader/app/structs/IVRSettings_SetFloat__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRSettings_SetFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_SetFloat_DEFINED) && !defined(IL2CPP_STRUCT_IVRSettings_SetFloat_FWDDECL)
#include <Modloader/app/structs/IVRSettings_SetFloat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSettings_SetFloat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
