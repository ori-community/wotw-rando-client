#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpShotShield_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpShotShield_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpShotShield_DEFINED)
#include <Modloader/app/structs/JumpShotShield__Fields.h>
#if defined(IL2CPP_STRUCT_JumpShotShield__Fields_DEFINED)
#define IL2CPP_STRUCT_JumpShotShield_DEFINED
struct JumpShotShield__Class;
struct JumpShotShield {
    struct JumpShotShield__Class* klass;
    MonitorData* monitor;
    struct JumpShotShield__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpShotShield_FWDDECL)
#define IL2CPP_STRUCT_JumpShotShield_FWDDECL
#include <Modloader/app/structs/JumpShotShield__Class.h>
#endif
#undef IL2CPP_STRUCT_JumpShotShield_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpShotShield_DEFINED) && !defined(IL2CPP_STRUCT_JumpShotShield_FWDDECL)
#include <Modloader/app/structs/JumpShotShield.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpShotShield.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
