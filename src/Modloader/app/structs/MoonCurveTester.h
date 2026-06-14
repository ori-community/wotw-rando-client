#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonCurveTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonCurveTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonCurveTester_DEFINED)
#include <Modloader/app/structs/MoonCurveTester__Fields.h>
#if defined(IL2CPP_STRUCT_MoonCurveTester__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonCurveTester_DEFINED
struct MoonCurveTester__Class;
struct MoonCurveTester {
    struct MoonCurveTester__Class* klass;
    MonitorData* monitor;
    struct MoonCurveTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonCurveTester_FWDDECL)
#define IL2CPP_STRUCT_MoonCurveTester_FWDDECL
#include <Modloader/app/structs/MoonCurveTester__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonCurveTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonCurveTester_DEFINED) && !defined(IL2CPP_STRUCT_MoonCurveTester_FWDDECL)
#include <Modloader/app/structs/MoonCurveTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonCurveTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
