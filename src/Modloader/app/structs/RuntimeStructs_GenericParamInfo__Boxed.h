#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo__Boxed_DEFINED)
#include <Modloader/app/structs/RuntimeStructs_GenericParamInfo.h>
#if defined(IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo_DEFINED)
#define IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo__Boxed_DEFINED
struct RuntimeStructs_GenericParamInfo__Class;
struct RuntimeStructs_GenericParamInfo__Boxed {
    struct RuntimeStructs_GenericParamInfo__Class* klass;
    MonitorData* monitor;
    struct RuntimeStructs_GenericParamInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo__Boxed_FWDDECL
#include <Modloader/app/structs/RuntimeStructs_GenericParamInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeStructs_GenericParamInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/RuntimeStructs_GenericParamInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeStructs_GenericParamInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
