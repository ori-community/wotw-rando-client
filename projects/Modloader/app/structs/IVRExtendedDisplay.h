#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRExtendedDisplay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRExtendedDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRExtendedDisplay_DEFINED)
#define IL2CPP_STRUCT_IVRExtendedDisplay_DEFINED
struct IVRExtendedDisplay_GetWindowBounds;
struct IVRExtendedDisplay_GetEyeOutputViewport;
struct IVRExtendedDisplay_GetDXGIOutputInfo;
struct IVRExtendedDisplay {
    struct IVRExtendedDisplay_GetWindowBounds* GetWindowBounds;
    struct IVRExtendedDisplay_GetEyeOutputViewport* GetEyeOutputViewport;
    struct IVRExtendedDisplay_GetDXGIOutputInfo* GetDXGIOutputInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_IVRExtendedDisplay_FWDDECL)
#define IL2CPP_STRUCT_IVRExtendedDisplay_FWDDECL
#include <Modloader/app/structs/IVRExtendedDisplay_GetDXGIOutputInfo.h>
#include <Modloader/app/structs/IVRExtendedDisplay_GetEyeOutputViewport.h>
#include <Modloader/app/structs/IVRExtendedDisplay_GetWindowBounds.h>
#endif
#undef IL2CPP_STRUCT_IVRExtendedDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRExtendedDisplay_DEFINED) && !defined(IL2CPP_STRUCT_IVRExtendedDisplay_FWDDECL)
#include <Modloader/app/structs/IVRExtendedDisplay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRExtendedDisplay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
