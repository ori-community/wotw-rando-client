#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest__Fields_DEFINED)
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/UberPoolPerfTest_TestMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_UberPoolPerfTest_TestMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_CancellationToken_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest__Fields_DEFINED
struct UberPoolPerfTest_Settings;
struct Task;
struct CancellationTokenSource;
struct Dictionary_2_System_Int32_UnityEngine_GameObject_;
struct UberPoolPerfTest__Fields {
    struct MonoBehaviour__Fields _;
    UberPoolPerfTest_TestMode__Enum m_mode;

    bool m_isAutomatedTest;
    struct UberPoolPerfTest_Settings* m_settings;
    struct Task* m_running;
    struct CancellationTokenSource* m_cancelSource;
    struct CancellationToken m_cancel;
    struct Dictionary_2_System_Int32_UnityEngine_GameObject_* m_additionalInstantiations;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest__Fields_FWDDECL
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/UberPoolPerfTest_Settings.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest__Fields_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
