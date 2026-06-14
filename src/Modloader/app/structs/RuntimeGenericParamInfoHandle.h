#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeGenericParamInfoHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeGenericParamInfoHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGenericParamInfoHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeGenericParamInfoHandle_DEFINED
struct RuntimeStructs_GenericParamInfo;
struct RuntimeGenericParamInfoHandle {
    struct RuntimeStructs_GenericParamInfo* value;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeGenericParamInfoHandle_FWDDECL)
#define IL2CPP_STRUCT_RuntimeGenericParamInfoHandle_FWDDECL
#include <Modloader/app/structs/RuntimeStructs_GenericParamInfo.h>
#endif
#undef IL2CPP_STRUCT_RuntimeGenericParamInfoHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGenericParamInfoHandle_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeGenericParamInfoHandle_FWDDECL)
#include <Modloader/app/structs/RuntimeGenericParamInfoHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeGenericParamInfoHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
