#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDtdEntityInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDtdEntityInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdEntityInfo_DEFINED)
#define IL2CPP_STRUCT_IDtdEntityInfo_DEFINED
struct IDtdEntityInfo__Class;
struct IDtdEntityInfo {
    struct IDtdEntityInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDtdEntityInfo_FWDDECL)
#define IL2CPP_STRUCT_IDtdEntityInfo_FWDDECL
#include <Modloader/app/structs/IDtdEntityInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IDtdEntityInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdEntityInfo_DEFINED) && !defined(IL2CPP_STRUCT_IDtdEntityInfo_FWDDECL)
#include <Modloader/app/structs/IDtdEntityInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDtdEntityInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
