#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo_DEFINED)
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo_DEFINED
struct UberPoolPerfTest_PrefabInfo__Class;
struct UberPoolPerfTest_PrefabInfo {
    struct UberPoolPerfTest_PrefabInfo__Class* klass;
    MonitorData* monitor;
    struct UberPoolPerfTest_PrefabInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo_FWDDECL
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest_PrefabInfo_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
