#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeParameterInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeParameterInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeParameterInfo_DEFINED)
#include <Modloader/app/structs/RuntimeParameterInfo__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeParameterInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeParameterInfo_DEFINED
struct RuntimeParameterInfo__Class;
struct RuntimeParameterInfo {
    struct RuntimeParameterInfo__Class* klass;
    MonitorData* monitor;
    struct RuntimeParameterInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeParameterInfo_FWDDECL)
#define IL2CPP_STRUCT_RuntimeParameterInfo_FWDDECL
#include <Modloader/app/structs/RuntimeParameterInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeParameterInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeParameterInfo_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeParameterInfo_FWDDECL)
#include <Modloader/app/structs/RuntimeParameterInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeParameterInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
