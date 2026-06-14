#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleGenericPool_1_T_PoolItem_System_Object__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleGenericPool_1_T_PoolItem_System_Object__INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleGenericPool_1_T_PoolItem_System_Object__DEFINED)
#define IL2CPP_STRUCT_SimpleGenericPool_1_T_PoolItem_System_Object__DEFINED
struct Object;
struct SimpleGenericPool_1_T_PoolItem_System_Object_ {
    bool IsFree;
    struct Object* Instance;
    int32_t Index;
    bool Optional;
    int32_t MaxLife;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleGenericPool_1_T_PoolItem_System_Object__FWDDECL)
#define IL2CPP_STRUCT_SimpleGenericPool_1_T_PoolItem_System_Object__FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_SimpleGenericPool_1_T_PoolItem_System_Object__INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleGenericPool_1_T_PoolItem_System_Object__DEFINED) && !defined(IL2CPP_STRUCT_SimpleGenericPool_1_T_PoolItem_System_Object__FWDDECL)
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleGenericPool_1_T_PoolItem_System_Object_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
