#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionsTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionsTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionsTest__Fields_DEFINED)
#include <Modloader/app/structs/ExceptionsTest_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ExceptionsTest_State__Enum_DEFINED)
#define IL2CPP_STRUCT_ExceptionsTest__Fields_DEFINED
struct String;
struct LogCallbackHandler;
struct JUnitReporter_TestSuite;
struct JUnitReporter_Failure;
struct ExceptionsTest__Fields {
    struct MonoBehaviour__Fields _;
    struct String* TestFolderName;
    ExceptionsTest_State__Enum CurrentState;

    float m_currentStateTime;
    int32_t CurrentSceneMetaDataIndex;
    float StartTestGraceTime;
    float TestDuration;
    struct String* EmptyTestSceneName;
    struct LogCallbackHandler* m_logCallbackHandler;
    struct String* m_workspace;
    struct JUnitReporter_TestSuite* m_testSuite;
    struct JUnitReporter_Failure* m_failure;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionsTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExceptionsTest__Fields_FWDDECL
#include <Modloader/app/structs/JUnitReporter_Failure.h>
#include <Modloader/app/structs/JUnitReporter_TestSuite.h>
#include <Modloader/app/structs/LogCallbackHandler.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ExceptionsTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionsTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionsTest__Fields_FWDDECL)
#include <Modloader/app/structs/ExceptionsTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionsTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
