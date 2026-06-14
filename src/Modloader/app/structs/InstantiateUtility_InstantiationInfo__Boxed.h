#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo__Boxed_DEFINED)
#include <Modloader/app/structs/InstantiateUtility_InstantiationInfo.h>
#if defined(IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo_DEFINED)
#define IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo__Boxed_DEFINED
struct InstantiateUtility_InstantiationInfo__Class;
struct InstantiateUtility_InstantiationInfo__Boxed {
    struct InstantiateUtility_InstantiationInfo__Class* klass;
    MonitorData* monitor;
    struct InstantiateUtility_InstantiationInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo__Boxed_FWDDECL
#include <Modloader/app/structs/InstantiateUtility_InstantiationInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/InstantiateUtility_InstantiationInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateUtility_InstantiationInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
