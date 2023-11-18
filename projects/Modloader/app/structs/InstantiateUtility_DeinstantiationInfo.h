#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateUtility_DeinstantiationInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateUtility_DeinstantiationInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateUtility_DeinstantiationInfo_DEFINED)
#define IL2CPP_STRUCT_InstantiateUtility_DeinstantiationInfo_DEFINED
struct String;
struct InstantiateUtility_DeinstantiationInfo {
    struct String* Name;
    float TimeSpent;
    bool Pooled;
};
#endif
#if !defined(IL2CPP_STRUCT_InstantiateUtility_DeinstantiationInfo_FWDDECL)
#define IL2CPP_STRUCT_InstantiateUtility_DeinstantiationInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_InstantiateUtility_DeinstantiationInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateUtility_DeinstantiationInfo_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateUtility_DeinstantiationInfo_FWDDECL)
#include <Modloader/app/structs/InstantiateUtility_DeinstantiationInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateUtility_DeinstantiationInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
