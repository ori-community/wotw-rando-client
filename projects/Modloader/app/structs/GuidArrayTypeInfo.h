#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuidArrayTypeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuidArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidArrayTypeInfo_DEFINED)
#include <Modloader/app/structs/GuidArrayTypeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_GuidArrayTypeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_GuidArrayTypeInfo_DEFINED
struct GuidArrayTypeInfo__Class;
struct GuidArrayTypeInfo {
    struct GuidArrayTypeInfo__Class* klass;
    MonitorData* monitor;
    struct GuidArrayTypeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuidArrayTypeInfo_FWDDECL)
#define IL2CPP_STRUCT_GuidArrayTypeInfo_FWDDECL
#include <Modloader/app/structs/GuidArrayTypeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_GuidArrayTypeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidArrayTypeInfo_DEFINED) && !defined(IL2CPP_STRUCT_GuidArrayTypeInfo_FWDDECL)
#include <Modloader/app/structs/GuidArrayTypeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuidArrayTypeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
