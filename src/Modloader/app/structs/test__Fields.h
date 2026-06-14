#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_test__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_test__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_test__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_test__Fields_DEFINED
struct test__Fields {
    struct MonoBehaviour__Fields _;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_test__Fields_FWDDECL)
#define IL2CPP_STRUCT_test__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_test__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_test__Fields_DEFINED) && !defined(IL2CPP_STRUCT_test__Fields_FWDDECL)
#include <Modloader/app/structs/test__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/test__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Test__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Test__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Test__Fields_DEFINED)
#define IL2CPP_STRUCT_Test__Fields_DEFINED
struct String;
struct __declspec(align(8)) Test__Fields {
    struct String* TestFilePath;
};
#endif
#if !defined(IL2CPP_STRUCT_Test__Fields_FWDDECL)
#define IL2CPP_STRUCT_Test__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Test__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Test__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Test__Fields_FWDDECL)
#include <Modloader/app/structs/Test__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Test__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
