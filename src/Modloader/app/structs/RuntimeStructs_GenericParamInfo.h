#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo_DEFINED)
#define IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo_DEFINED
struct RuntimeStructs_MonoClass;
struct RuntimeStructs_GenericParamInfo {
    struct RuntimeStructs_MonoClass* pklass;
    void* name;
    uint16_t flags;
    uint32_t token;
    struct RuntimeStructs_MonoClass** constraints;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo_FWDDECL)
#define IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo_FWDDECL
#include <Modloader/app/structs/RuntimeStructs_MonoClass.h>
#endif
#undef IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo_FWDDECL)
#include <Modloader/app/structs/RuntimeStructs_GenericParamInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeStructs_GenericParamInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
