#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BanInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BanInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_BanInfo_DEFINED)
#include <Modloader/app/structs/BanInfo__Fields.h>
#if defined(IL2CPP_STRUCT_BanInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_BanInfo_DEFINED
struct BanInfo__Class;
struct BanInfo {
    struct BanInfo__Class* klass;
    MonitorData* monitor;
    struct BanInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BanInfo_FWDDECL)
#define IL2CPP_STRUCT_BanInfo_FWDDECL
#include <Modloader/app/structs/BanInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_BanInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_BanInfo_DEFINED) && !defined(IL2CPP_STRUCT_BanInfo_FWDDECL)
#include <Modloader/app/structs/BanInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BanInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
