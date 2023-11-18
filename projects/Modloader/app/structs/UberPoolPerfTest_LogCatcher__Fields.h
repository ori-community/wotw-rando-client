#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest_LogCatcher__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest_LogCatcher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_LogCatcher__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest_LogCatcher__Fields_DEFINED
struct UberPoolPerfTest_PrefabInfo;
struct StringBuilder;
struct __declspec(align(8)) UberPoolPerfTest_LogCatcher__Fields {
    struct UberPoolPerfTest_PrefabInfo* Target;
    bool m_disposed;
    struct StringBuilder* m_sb;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_LogCatcher__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest_LogCatcher__Fields_FWDDECL
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/UberPoolPerfTest_PrefabInfo.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest_LogCatcher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_LogCatcher__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest_LogCatcher__Fields_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest_LogCatcher__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest_LogCatcher__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
