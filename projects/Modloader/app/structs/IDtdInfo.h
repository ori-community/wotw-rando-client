#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDtdInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDtdInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdInfo_DEFINED)
#define IL2CPP_STRUCT_IDtdInfo_DEFINED
struct IDtdInfo__Class;
struct IDtdInfo {
    struct IDtdInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDtdInfo_FWDDECL)
#define IL2CPP_STRUCT_IDtdInfo_FWDDECL
#include <Modloader/app/structs/IDtdInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IDtdInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdInfo_DEFINED) && !defined(IL2CPP_STRUCT_IDtdInfo_FWDDECL)
#include <Modloader/app/structs/IDtdInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDtdInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
