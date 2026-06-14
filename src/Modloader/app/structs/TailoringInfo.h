#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TailoringInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TailoringInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TailoringInfo_DEFINED)
#include <Modloader/app/structs/TailoringInfo__Fields.h>
#if defined(IL2CPP_STRUCT_TailoringInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_TailoringInfo_DEFINED
struct TailoringInfo__Class;
struct TailoringInfo {
    struct TailoringInfo__Class* klass;
    MonitorData* monitor;
    struct TailoringInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TailoringInfo_FWDDECL)
#define IL2CPP_STRUCT_TailoringInfo_FWDDECL
#include <Modloader/app/structs/TailoringInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_TailoringInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TailoringInfo_DEFINED) && !defined(IL2CPP_STRUCT_TailoringInfo_FWDDECL)
#include <Modloader/app/structs/TailoringInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TailoringInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
