#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoParameterInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoParameterInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoParameterInfo_DEFINED)
#include <Modloader/app/structs/MonoParameterInfo__Fields.h>
#if defined(IL2CPP_STRUCT_MonoParameterInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoParameterInfo_DEFINED
struct MonoParameterInfo__Class;
struct MonoParameterInfo {
    struct MonoParameterInfo__Class* klass;
    MonitorData* monitor;
    struct MonoParameterInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoParameterInfo_FWDDECL)
#define IL2CPP_STRUCT_MonoParameterInfo_FWDDECL
#include <Modloader/app/structs/MonoParameterInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoParameterInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoParameterInfo_DEFINED) && !defined(IL2CPP_STRUCT_MonoParameterInfo_FWDDECL)
#include <Modloader/app/structs/MonoParameterInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoParameterInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
