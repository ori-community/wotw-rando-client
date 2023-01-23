#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropPickup_SharedUpdateData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropPickup_SharedUpdateData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropPickup_SharedUpdateData_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DropPickup_SharedUpdateData_DEFINED
struct DropPickup_SharedUpdateData {
    struct Vector3 OriPos;
    float AttractionDistance;
    float DeltaTime;
    bool IsMagnetEquipped;
    bool HasUltraMagnet;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropPickup_SharedUpdateData_FWDDECL)
#define IL2CPP_STRUCT_DropPickup_SharedUpdateData_FWDDECL
#endif
#undef IL2CPP_STRUCT_DropPickup_SharedUpdateData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropPickup_SharedUpdateData_DEFINED) && !defined(IL2CPP_STRUCT_DropPickup_SharedUpdateData_FWDDECL)
#include <Modloader/app/structs/DropPickup_SharedUpdateData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropPickup_SharedUpdateData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
