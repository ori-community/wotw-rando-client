#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpenVR_COpenVRContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpenVR_COpenVRContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenVR_COpenVRContext_DEFINED)
#include <Modloader/app/structs/OpenVR_COpenVRContext__Fields.h>
#if defined(IL2CPP_STRUCT_OpenVR_COpenVRContext__Fields_DEFINED)
#define IL2CPP_STRUCT_OpenVR_COpenVRContext_DEFINED
struct OpenVR_COpenVRContext__Class;
struct OpenVR_COpenVRContext {
    struct OpenVR_COpenVRContext__Class* klass;
    MonitorData* monitor;
    struct OpenVR_COpenVRContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OpenVR_COpenVRContext_FWDDECL)
#define IL2CPP_STRUCT_OpenVR_COpenVRContext_FWDDECL
#include <Modloader/app/structs/OpenVR_COpenVRContext__Class.h>
#endif
#undef IL2CPP_STRUCT_OpenVR_COpenVRContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenVR_COpenVRContext_DEFINED) && !defined(IL2CPP_STRUCT_OpenVR_COpenVRContext_FWDDECL)
#include <Modloader/app/structs/OpenVR_COpenVRContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpenVR_COpenVRContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
