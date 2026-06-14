#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvas_BindData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvas_BindData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_BindData_DEFINED)
#include <Modloader/app/structs/LightCanvas_BindData__Fields.h>
#if defined(IL2CPP_STRUCT_LightCanvas_BindData__Fields_DEFINED)
#define IL2CPP_STRUCT_LightCanvas_BindData_DEFINED
struct LightCanvas_BindData__Class;
struct LightCanvas_BindData {
    struct LightCanvas_BindData__Class* klass;
    MonitorData* monitor;
    struct LightCanvas_BindData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightCanvas_BindData_FWDDECL)
#define IL2CPP_STRUCT_LightCanvas_BindData_FWDDECL
#include <Modloader/app/structs/LightCanvas_BindData__Class.h>
#endif
#undef IL2CPP_STRUCT_LightCanvas_BindData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_BindData_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvas_BindData_FWDDECL)
#include <Modloader/app/structs/LightCanvas_BindData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvas_BindData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
