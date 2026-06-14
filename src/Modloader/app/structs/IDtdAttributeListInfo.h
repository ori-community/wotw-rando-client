#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDtdAttributeListInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDtdAttributeListInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdAttributeListInfo_DEFINED)
#define IL2CPP_STRUCT_IDtdAttributeListInfo_DEFINED
struct IDtdAttributeListInfo__Class;
struct IDtdAttributeListInfo {
    struct IDtdAttributeListInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDtdAttributeListInfo_FWDDECL)
#define IL2CPP_STRUCT_IDtdAttributeListInfo_FWDDECL
#include <Modloader/app/structs/IDtdAttributeListInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IDtdAttributeListInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdAttributeListInfo_DEFINED) && !defined(IL2CPP_STRUCT_IDtdAttributeListInfo_FWDDECL)
#include <Modloader/app/structs/IDtdAttributeListInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDtdAttributeListInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
