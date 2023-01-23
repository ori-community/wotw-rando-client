#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLeashInteractable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLeashInteractable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashInteractable__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SpiritLeashMode__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiritLeashMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiritLeashInteractable__Fields_DEFINED
struct ActionMethod;
struct Transform;
struct IDamageReciever__Array;
struct SpiritLeashInteractable__Fields {
    struct SaveSerialize__Fields _;
    struct ActionMethod* OnSpiritLeashAction;
    SpiritLeashMode__Enum SpiritLeashMode;

    bool CanTargetBeSustained;
    struct Transform* m_transform;
    bool _Activated_k__BackingField;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLeashInteractable__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritLeashInteractable__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiritLeashInteractable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashInteractable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLeashInteractable__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritLeashInteractable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLeashInteractable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
