#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SendMouseEvents_HitInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SendMouseEvents_HitInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo_DEFINED)
#define IL2CPP_STRUCT_SendMouseEvents_HitInfo_DEFINED
struct GameObject;
struct Camera;
struct SendMouseEvents_HitInfo {
    struct GameObject* target;
    struct Camera* camera;
};
#endif
#if !defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo_FWDDECL)
#define IL2CPP_STRUCT_SendMouseEvents_HitInfo_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_SendMouseEvents_HitInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo_DEFINED) && !defined(IL2CPP_STRUCT_SendMouseEvents_HitInfo_FWDDECL)
#include <Modloader/app/structs/SendMouseEvents_HitInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SendMouseEvents_HitInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
