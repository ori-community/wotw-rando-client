#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateUtility_InstantiateInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateUtility_InstantiateInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateUtility_InstantiateInfo_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_InstantiateUtility_InstantiateInfo_DEFINED
struct Object_1;
struct InstantiateUtility_InstantiateInfo {
    struct Object_1* Object;
    struct Vector3 Position;
    struct Quaternion Rotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiateUtility_InstantiateInfo_FWDDECL)
#define IL2CPP_STRUCT_InstantiateUtility_InstantiateInfo_FWDDECL
#include <Modloader/app/structs/Object_1.h>
#endif
#undef IL2CPP_STRUCT_InstantiateUtility_InstantiateInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateUtility_InstantiateInfo_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateUtility_InstantiateInfo_FWDDECL)
#include <Modloader/app/structs/InstantiateUtility_InstantiateInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateUtility_InstantiateInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
