#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputData_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputData_DEFINED)
#include <Modloader/app/structs/InputData__Fields.h>
#if defined(IL2CPP_STRUCT_InputData__Fields_DEFINED)
#define IL2CPP_STRUCT_InputData_DEFINED
struct InputData__Class;
struct InputData {
    struct InputData__Class* klass;
    MonitorData* monitor;
    struct InputData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputData_FWDDECL)
#define IL2CPP_STRUCT_InputData_FWDDECL
#include <Modloader/app/structs/InputData__Class.h>
#endif
#undef IL2CPP_STRUCT_InputData_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputData_DEFINED) && !defined(IL2CPP_STRUCT_InputData_FWDDECL)
#include <Modloader/app/structs/InputData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
