#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolManager_ObjectTracking_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolManager_ObjectTracking_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolManager_ObjectTracking_DEFINED)
#define IL2CPP_STRUCT_UberPoolManager_ObjectTracking_DEFINED
struct GameObject;
struct UberPoolManager_ObjectTracking {
    struct GameObject* GameObject;
    int32_t InstanceID;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPoolManager_ObjectTracking_FWDDECL)
#define IL2CPP_STRUCT_UberPoolManager_ObjectTracking_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_UberPoolManager_ObjectTracking_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolManager_ObjectTracking_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolManager_ObjectTracking_FWDDECL)
#include <Modloader/app/structs/UberPoolManager_ObjectTracking.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolManager_ObjectTracking.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
