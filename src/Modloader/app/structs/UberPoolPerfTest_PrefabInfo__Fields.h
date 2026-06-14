#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo__Fields_DEFINED
struct UberPoolGroupWarmer;
struct GameObject;
struct List_1_System_String_;
struct __declspec(align(8)) UberPoolPerfTest_PrefabInfo__Fields {
    struct UberPoolGroupWarmer* Pool;
    struct GameObject* Prefab;
    int32_t SpawnCount;
    struct List_1_System_String_* Diagnostics;
    bool RanSuccessfully;
    int32_t AdditionalInstantiations;
    struct List_1_System_String_* LingeringInstantiations;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/UberPoolGroupWarmer.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo__Fields_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
