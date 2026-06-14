#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuidTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuidTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidTypeInfo_DEFINED)
#include <Modloader/app/structs/GuidTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_GuidTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_GuidTypeInfo_DEFINED
struct GuidTypeInfo__Class;
struct GuidTypeInfo {
    struct GuidTypeInfo__Class* klass;
    MonitorData* monitor;
    struct GuidTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuidTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_GuidTypeInfo_FWDDECL
#include <Modloader/app/structs/GuidTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_GuidTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_GuidTypeInfo_FWDDECL)
#include <Modloader/app/structs/GuidTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuidTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
