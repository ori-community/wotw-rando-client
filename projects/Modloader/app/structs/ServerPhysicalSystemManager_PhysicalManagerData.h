#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerPhysicalSystemManager_PhysicalManagerData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerPhysicalSystemManager_PhysicalManagerData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPhysicalSystemManager_PhysicalManagerData_DEFINED)
#define IL2CPP_STRUCT_ServerPhysicalSystemManager_PhysicalManagerData_DEFINED
struct MoonGuid;
struct Vector4Ser;
struct List_1_System_Int32_;
struct List_1_ServerPhysicalSystemManager_RigidbodyStateData_;
struct ServerPhysicalSystemManager_PhysicalManagerData {
    struct MoonGuid* MGuid;
    struct Vector4Ser* Bounds;
    bool UseLocalCoords;
    int32_t JointAmount;
    struct List_1_System_Int32_* CacheJointsIDs;
    int32_t RigidbodiesAmount;
    struct List_1_ServerPhysicalSystemManager_RigidbodyStateData_* RigidbodiesStateData;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerPhysicalSystemManager_PhysicalManagerData_FWDDECL)
#define IL2CPP_STRUCT_ServerPhysicalSystemManager_PhysicalManagerData_FWDDECL
#include <Modloader/app/structs/List_1_ServerPhysicalSystemManager_RigidbodyStateData_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/Vector4Ser.h>
#endif
#undef IL2CPP_STRUCT_ServerPhysicalSystemManager_PhysicalManagerData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPhysicalSystemManager_PhysicalManagerData_DEFINED) && !defined(IL2CPP_STRUCT_ServerPhysicalSystemManager_PhysicalManagerData_FWDDECL)
#include <Modloader/app/structs/ServerPhysicalSystemManager_PhysicalManagerData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerPhysicalSystemManager_PhysicalManagerData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
