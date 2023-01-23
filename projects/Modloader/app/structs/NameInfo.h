#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameInfo_DEFINED)
#include <Modloader/app/structs/NameInfo__Fields.h>
#if defined(IL2CPP_STRUCT_NameInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_NameInfo_DEFINED
struct NameInfo__Class;
struct NameInfo {
    struct NameInfo__Class* klass;
    MonitorData* monitor;
    struct NameInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameInfo_FWDDECL)
#define IL2CPP_STRUCT_NameInfo_FWDDECL
#include <Modloader/app/structs/NameInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_NameInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameInfo_DEFINED) && !defined(IL2CPP_STRUCT_NameInfo_FWDDECL)
#include <Modloader/app/structs/NameInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
