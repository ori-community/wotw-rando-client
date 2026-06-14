#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CursorInputData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CursorInputData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorInputData_DEFINED)
#include <Modloader/app/structs/CursorInputData__Fields.h>
#if defined(IL2CPP_STRUCT_CursorInputData__Fields_DEFINED)
#define IL2CPP_STRUCT_CursorInputData_DEFINED
struct CursorInputData__Class;
struct CursorInputData {
    struct CursorInputData__Class* klass;
    MonitorData* monitor;
    struct CursorInputData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CursorInputData_FWDDECL)
#define IL2CPP_STRUCT_CursorInputData_FWDDECL
#include <Modloader/app/structs/CursorInputData__Class.h>
#endif
#undef IL2CPP_STRUCT_CursorInputData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorInputData_DEFINED) && !defined(IL2CPP_STRUCT_CursorInputData_FWDDECL)
#include <Modloader/app/structs/CursorInputData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CursorInputData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
