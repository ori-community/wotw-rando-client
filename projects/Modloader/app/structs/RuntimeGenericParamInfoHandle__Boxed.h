#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeGenericParamInfoHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeGenericParamInfoHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGenericParamInfoHandle__Boxed_DEFINED)
#include <Modloader/app/structs/RuntimeGenericParamInfoHandle.h>
#if defined(IL2CPP_STRUCT_RuntimeGenericParamInfoHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeGenericParamInfoHandle__Boxed_DEFINED
struct RuntimeGenericParamInfoHandle__Class;
struct RuntimeGenericParamInfoHandle__Boxed {
    struct RuntimeGenericParamInfoHandle__Class* klass;
    MonitorData* monitor;
    struct RuntimeGenericParamInfoHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeGenericParamInfoHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RuntimeGenericParamInfoHandle__Boxed_FWDDECL
#include <Modloader/app/structs/RuntimeGenericParamInfoHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeGenericParamInfoHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGenericParamInfoHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeGenericParamInfoHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/RuntimeGenericParamInfoHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeGenericParamInfoHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
