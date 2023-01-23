#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRChaperone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRChaperone_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRChaperone_DEFINED)
#define IL2CPP_STRUCT_IVRChaperone_DEFINED
struct IVRChaperone_GetCalibrationState;
struct IVRChaperone_GetPlayAreaSize;
struct IVRChaperone_GetPlayAreaRect;
struct IVRChaperone_ReloadInfo;
struct IVRChaperone_SetSceneColor;
struct IVRChaperone_GetBoundsColor;
struct IVRChaperone_AreBoundsVisible;
struct IVRChaperone_ForceBoundsVisible;
struct IVRChaperone {
    struct IVRChaperone_GetCalibrationState* GetCalibrationState;
    struct IVRChaperone_GetPlayAreaSize* GetPlayAreaSize;
    struct IVRChaperone_GetPlayAreaRect* GetPlayAreaRect;
    struct IVRChaperone_ReloadInfo* ReloadInfo;
    struct IVRChaperone_SetSceneColor* SetSceneColor;
    struct IVRChaperone_GetBoundsColor* GetBoundsColor;
    struct IVRChaperone_AreBoundsVisible* AreBoundsVisible;
    struct IVRChaperone_ForceBoundsVisible* ForceBoundsVisible;
};
#endif
#if !defined(IL2CPP_STRUCT_IVRChaperone_FWDDECL)
#define IL2CPP_STRUCT_IVRChaperone_FWDDECL
#include <Modloader/app/structs/IVRChaperone_AreBoundsVisible.h>
#include <Modloader/app/structs/IVRChaperone_ForceBoundsVisible.h>
#include <Modloader/app/structs/IVRChaperone_GetBoundsColor.h>
#include <Modloader/app/structs/IVRChaperone_GetCalibrationState.h>
#include <Modloader/app/structs/IVRChaperone_GetPlayAreaRect.h>
#include <Modloader/app/structs/IVRChaperone_GetPlayAreaSize.h>
#include <Modloader/app/structs/IVRChaperone_ReloadInfo.h>
#include <Modloader/app/structs/IVRChaperone_SetSceneColor.h>
#endif
#undef IL2CPP_STRUCT_IVRChaperone_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRChaperone_DEFINED) && !defined(IL2CPP_STRUCT_IVRChaperone_FWDDECL)
#include <Modloader/app/structs/IVRChaperone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRChaperone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
