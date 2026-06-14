#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumInfo_DEFINED)
#include <Modloader/app/structs/EnumInfo__Fields.h>
#if defined(IL2CPP_STRUCT_EnumInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_EnumInfo_DEFINED
struct EnumInfo__Class;
struct EnumInfo {
    struct EnumInfo__Class* klass;
    MonitorData* monitor;
    struct EnumInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnumInfo_FWDDECL)
#define IL2CPP_STRUCT_EnumInfo_FWDDECL
#include <Modloader/app/structs/EnumInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_EnumInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumInfo_DEFINED) && !defined(IL2CPP_STRUCT_EnumInfo_FWDDECL)
#include <Modloader/app/structs/EnumInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
