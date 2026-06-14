#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestSet__Fields_DEFINED)
#define IL2CPP_STRUCT_TestSet__Fields_DEFINED
struct String;
struct List_1_Test_;
struct TestSetConfiguration;
struct LogCallbackHandler;
struct __declspec(align(8)) TestSet__Fields {
    struct String* TestSetFolderPath;
    struct List_1_Test_* Tests;
    struct TestSetConfiguration* TestSetConfiguration;
    struct String* OutputFolderPath;
    struct LogCallbackHandler* m_logCallbackHandler;
    int32_t m_testIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_TestSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_TestSet__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Test_.h>
#include <Modloader/app/structs/LogCallbackHandler.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TestSetConfiguration.h>
#endif
#undef IL2CPP_STRUCT_TestSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TestSet__Fields_FWDDECL)
#include <Modloader/app/structs/TestSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
