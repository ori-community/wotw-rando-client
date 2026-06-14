#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Uri_MoreInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Uri_MoreInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_MoreInfo_DEFINED)
#include <Modloader/app/structs/Uri_MoreInfo__Fields.h>
#if defined(IL2CPP_STRUCT_Uri_MoreInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_Uri_MoreInfo_DEFINED
struct Uri_MoreInfo__Class;
struct Uri_MoreInfo {
    struct Uri_MoreInfo__Class* klass;
    MonitorData* monitor;
    struct Uri_MoreInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Uri_MoreInfo_FWDDECL)
#define IL2CPP_STRUCT_Uri_MoreInfo_FWDDECL
#include <Modloader/app/structs/Uri_MoreInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_Uri_MoreInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_MoreInfo_DEFINED) && !defined(IL2CPP_STRUCT_Uri_MoreInfo_FWDDECL)
#include <Modloader/app/structs/Uri_MoreInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Uri_MoreInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
