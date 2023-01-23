#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpenVR__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpenVR__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenVR__StaticFields_DEFINED)
#define IL2CPP_STRUCT_OpenVR__StaticFields_DEFINED
struct OpenVR_COpenVRContext;
struct OpenVR__StaticFields {
    uint32_t _VRToken_k__BackingField;
    struct OpenVR_COpenVRContext* _OpenVRInternal_ModuleContext;
};
#endif
#if !defined(IL2CPP_STRUCT_OpenVR__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_OpenVR__StaticFields_FWDDECL
#include <Modloader/app/structs/OpenVR_COpenVRContext.h>
#endif
#undef IL2CPP_STRUCT_OpenVR__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenVR__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_OpenVR__StaticFields_FWDDECL)
#include <Modloader/app/structs/OpenVR__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpenVR__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
