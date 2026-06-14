#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OffMeshLinkData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OffMeshLinkData_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffMeshLinkData_DEFINED)
#include <Modloader/app/structs/OffMeshLinkType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_OffMeshLinkType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_OffMeshLinkData_DEFINED
struct OffMeshLinkData {
    int32_t m_Valid;
    int32_t m_Activated;
    int32_t m_InstanceID;
    OffMeshLinkType__Enum m_LinkType;

    struct Vector3 m_StartPos;
    struct Vector3 m_EndPos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OffMeshLinkData_FWDDECL)
#define IL2CPP_STRUCT_OffMeshLinkData_FWDDECL
#endif
#undef IL2CPP_STRUCT_OffMeshLinkData_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffMeshLinkData_DEFINED) && !defined(IL2CPP_STRUCT_OffMeshLinkData_FWDDECL)
#include <Modloader/app/structs/OffMeshLinkData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OffMeshLinkData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
