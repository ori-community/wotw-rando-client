#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateUtility_DEFINED)
#define IL2CPP_STRUCT_InstantiateUtility_DEFINED
struct InstantiateUtility__Class;
struct InstantiateUtility {
    struct InstantiateUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_InstantiateUtility_FWDDECL)
#define IL2CPP_STRUCT_InstantiateUtility_FWDDECL
#include <Modloader/app/structs/InstantiateUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantiateUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateUtility_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateUtility_FWDDECL)
#include <Modloader/app/structs/InstantiateUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
