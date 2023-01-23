#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecuteInEditMode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecuteInEditMode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteInEditMode_DEFINED)
#define IL2CPP_STRUCT_ExecuteInEditMode_DEFINED
struct ExecuteInEditMode__Class;
struct ExecuteInEditMode {
    struct ExecuteInEditMode__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExecuteInEditMode_FWDDECL)
#define IL2CPP_STRUCT_ExecuteInEditMode_FWDDECL
#include <Modloader/app/structs/ExecuteInEditMode__Class.h>
#endif
#undef IL2CPP_STRUCT_ExecuteInEditMode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteInEditMode_DEFINED) && !defined(IL2CPP_STRUCT_ExecuteInEditMode_FWDDECL)
#include <Modloader/app/structs/ExecuteInEditMode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecuteInEditMode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
