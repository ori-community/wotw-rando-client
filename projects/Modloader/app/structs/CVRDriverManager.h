#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRDriverManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRDriverManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRDriverManager_DEFINED)
#include <Modloader/app/structs/CVRDriverManager__Fields.h>
#if defined(IL2CPP_STRUCT_CVRDriverManager__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRDriverManager_DEFINED
struct CVRDriverManager__Class;
struct CVRDriverManager {
    struct CVRDriverManager__Class* klass;
    MonitorData* monitor;
    struct CVRDriverManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRDriverManager_FWDDECL)
#define IL2CPP_STRUCT_CVRDriverManager_FWDDECL
#include <Modloader/app/structs/CVRDriverManager__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRDriverManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRDriverManager_DEFINED) && !defined(IL2CPP_STRUCT_CVRDriverManager_FWDDECL)
#include <Modloader/app/structs/CVRDriverManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRDriverManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
