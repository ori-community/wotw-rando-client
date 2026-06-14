#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitProtection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitProtection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitProtection__Fields_DEFINED)
#include <Modloader/app/structs/HitProtectionState__Enum.h>
#if defined(IL2CPP_STRUCT_HitProtectionState__Enum_DEFINED)
#define IL2CPP_STRUCT_HitProtection__Fields_DEFINED
struct Dictionary_2_System_Object_HitProtectionState_;
struct Object;
struct __declspec(align(8)) HitProtection__Fields {
    struct Dictionary_2_System_Object_HitProtectionState_* m_protectionStateGuard;
    HitProtectionState__Enum DefaultProtectionState;

    HitProtectionState__Enum m_protectionState;

    struct Object* m_protector;
    float m_vulnerabilityTimer;
    float m_invulnerabilityTimer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitProtection__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitProtection__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Object_HitProtectionState_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_HitProtection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitProtection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitProtection__Fields_FWDDECL)
#include <Modloader/app/structs/HitProtection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitProtection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
