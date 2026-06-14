#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponMasterIntroNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponMasterIntroNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterIntroNode_DEFINED)
#include <Modloader/app/structs/WeaponMasterIntroNode__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponMasterIntroNode__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponMasterIntroNode_DEFINED
struct WeaponMasterIntroNode__Class;
struct WeaponMasterIntroNode {
    struct WeaponMasterIntroNode__Class* klass;
    MonitorData* monitor;
    struct WeaponMasterIntroNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponMasterIntroNode_FWDDECL)
#define IL2CPP_STRUCT_WeaponMasterIntroNode_FWDDECL
#include <Modloader/app/structs/WeaponMasterIntroNode__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponMasterIntroNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterIntroNode_DEFINED) && !defined(IL2CPP_STRUCT_WeaponMasterIntroNode_FWDDECL)
#include <Modloader/app/structs/WeaponMasterIntroNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponMasterIntroNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
