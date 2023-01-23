#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDtdAttributeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDtdAttributeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdAttributeInfo_DEFINED)
#define IL2CPP_STRUCT_IDtdAttributeInfo_DEFINED
struct IDtdAttributeInfo__Class;
struct IDtdAttributeInfo {
    struct IDtdAttributeInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDtdAttributeInfo_FWDDECL)
#define IL2CPP_STRUCT_IDtdAttributeInfo_FWDDECL
#include <Modloader/app/structs/IDtdAttributeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IDtdAttributeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdAttributeInfo_DEFINED) && !defined(IL2CPP_STRUCT_IDtdAttributeInfo_FWDDECL)
#include <Modloader/app/structs/IDtdAttributeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDtdAttributeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
