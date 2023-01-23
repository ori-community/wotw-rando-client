#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolGroupWarmer_PrewarmItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolGroupWarmer_PrewarmItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolGroupWarmer_PrewarmItem_DEFINED)
#define IL2CPP_STRUCT_UberPoolGroupWarmer_PrewarmItem_DEFINED
struct GameObject;
struct UberPoolGroupWarmer_PrewarmItem {
    struct GameObject* Prefab;
    int32_t Amount;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPoolGroupWarmer_PrewarmItem_FWDDECL)
#define IL2CPP_STRUCT_UberPoolGroupWarmer_PrewarmItem_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_UberPoolGroupWarmer_PrewarmItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolGroupWarmer_PrewarmItem_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolGroupWarmer_PrewarmItem_FWDDECL)
#include <Modloader/app/structs/UberPoolGroupWarmer_PrewarmItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolGroupWarmer_PrewarmItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
