#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRRenderModels_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRRenderModels_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRRenderModels_DEFINED)
#define IL2CPP_STRUCT_IVRRenderModels_DEFINED
struct IVRRenderModels_LoadRenderModel_Async;
struct IVRRenderModels_FreeRenderModel;
struct IVRRenderModels_LoadTexture_Async;
struct IVRRenderModels_FreeTexture;
struct IVRRenderModels_LoadTextureD3D11_Async;
struct IVRRenderModels_LoadIntoTextureD3D11_Async;
struct IVRRenderModels_FreeTextureD3D11;
struct IVRRenderModels_GetRenderModelName;
struct IVRRenderModels_GetRenderModelCount;
struct IVRRenderModels_GetComponentCount;
struct IVRRenderModels_GetComponentName;
struct IVRRenderModels_GetComponentButtonMask;
struct IVRRenderModels_GetComponentRenderModelName;
struct IVRRenderModels_GetComponentState;
struct IVRRenderModels_RenderModelHasComponent;
struct IVRRenderModels_GetRenderModelThumbnailURL;
struct IVRRenderModels_GetRenderModelOriginalPath;
struct IVRRenderModels_GetRenderModelErrorNameFromEnum;
struct IVRRenderModels {
    struct IVRRenderModels_LoadRenderModel_Async* LoadRenderModel_Async;
    struct IVRRenderModels_FreeRenderModel* FreeRenderModel;
    struct IVRRenderModels_LoadTexture_Async* LoadTexture_Async;
    struct IVRRenderModels_FreeTexture* FreeTexture;
    struct IVRRenderModels_LoadTextureD3D11_Async* LoadTextureD3D11_Async;
    struct IVRRenderModels_LoadIntoTextureD3D11_Async* LoadIntoTextureD3D11_Async;
    struct IVRRenderModels_FreeTextureD3D11* FreeTextureD3D11;
    struct IVRRenderModels_GetRenderModelName* GetRenderModelName;
    struct IVRRenderModels_GetRenderModelCount* GetRenderModelCount;
    struct IVRRenderModels_GetComponentCount* GetComponentCount;
    struct IVRRenderModels_GetComponentName* GetComponentName;
    struct IVRRenderModels_GetComponentButtonMask* GetComponentButtonMask;
    struct IVRRenderModels_GetComponentRenderModelName* GetComponentRenderModelName;
    struct IVRRenderModels_GetComponentState* GetComponentState;
    struct IVRRenderModels_RenderModelHasComponent* RenderModelHasComponent;
    struct IVRRenderModels_GetRenderModelThumbnailURL* GetRenderModelThumbnailURL;
    struct IVRRenderModels_GetRenderModelOriginalPath* GetRenderModelOriginalPath;
    struct IVRRenderModels_GetRenderModelErrorNameFromEnum* GetRenderModelErrorNameFromEnum;
};
#endif
#if !defined(IL2CPP_STRUCT_IVRRenderModels_FWDDECL)
#define IL2CPP_STRUCT_IVRRenderModels_FWDDECL
#include <Modloader/app/structs/IVRRenderModels_FreeRenderModel.h>
#include <Modloader/app/structs/IVRRenderModels_FreeTexture.h>
#include <Modloader/app/structs/IVRRenderModels_FreeTextureD3D11.h>
#include <Modloader/app/structs/IVRRenderModels_GetComponentButtonMask.h>
#include <Modloader/app/structs/IVRRenderModels_GetComponentCount.h>
#include <Modloader/app/structs/IVRRenderModels_GetComponentName.h>
#include <Modloader/app/structs/IVRRenderModels_GetComponentRenderModelName.h>
#include <Modloader/app/structs/IVRRenderModels_GetComponentState.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelCount.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelErrorNameFromEnum.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelName.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelOriginalPath.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelThumbnailURL.h>
#include <Modloader/app/structs/IVRRenderModels_LoadIntoTextureD3D11_Async.h>
#include <Modloader/app/structs/IVRRenderModels_LoadRenderModel_Async.h>
#include <Modloader/app/structs/IVRRenderModels_LoadTextureD3D11_Async.h>
#include <Modloader/app/structs/IVRRenderModels_LoadTexture_Async.h>
#include <Modloader/app/structs/IVRRenderModels_RenderModelHasComponent.h>
#endif
#undef IL2CPP_STRUCT_IVRRenderModels_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRRenderModels_DEFINED) && !defined(IL2CPP_STRUCT_IVRRenderModels_FWDDECL)
#include <Modloader/app/structs/IVRRenderModels.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRRenderModels.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
