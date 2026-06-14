#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor__Fields_DEFINED
struct StreamWriter;
struct List_1_System_String_;
struct SceneFrameworkPerformanceMonitor__Fields {
    struct MonoBehaviour__Fields _;
    struct StreamWriter* m_streamWriter;
    struct List_1_System_String_* m_lines;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/StreamWriter.h>
#endif
#undef IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor__Fields_FWDDECL)
#include <Modloader/app/structs/SceneFrameworkPerformanceMonitor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneFrameworkPerformanceMonitor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
