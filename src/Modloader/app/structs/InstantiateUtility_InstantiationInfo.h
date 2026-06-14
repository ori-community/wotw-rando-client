#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo_DEFINED)
#define IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo_DEFINED
struct String;
struct InstantiateUtility_InstantiationInfo {
    int32_t InstanceID;
    struct String* Name;
    float TimeSpent;
    bool Pooled;
    bool New;
    int32_t FrameNumber;
};
#endif
#if !defined(IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo_FWDDECL)
#define IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateUtility_InstantiationInfo_FWDDECL)
#include <Modloader/app/structs/InstantiateUtility_InstantiationInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateUtility_InstantiationInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
