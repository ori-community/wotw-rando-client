#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDtdDefaultAttributeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDtdDefaultAttributeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdDefaultAttributeInfo_DEFINED)
#define IL2CPP_STRUCT_IDtdDefaultAttributeInfo_DEFINED
struct IDtdDefaultAttributeInfo__Class;
struct IDtdDefaultAttributeInfo {
    struct IDtdDefaultAttributeInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDtdDefaultAttributeInfo_FWDDECL)
#define IL2CPP_STRUCT_IDtdDefaultAttributeInfo_FWDDECL
#include <Modloader/app/structs/IDtdDefaultAttributeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IDtdDefaultAttributeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdDefaultAttributeInfo_DEFINED) && !defined(IL2CPP_STRUCT_IDtdDefaultAttributeInfo_FWDDECL)
#include <Modloader/app/structs/IDtdDefaultAttributeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDtdDefaultAttributeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
