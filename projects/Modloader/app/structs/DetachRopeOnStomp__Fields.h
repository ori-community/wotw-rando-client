#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DetachRopeOnStomp__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DetachRopeOnStomp__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DetachRopeOnStomp__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DetachRopeOnStomp__Fields_DEFINED
struct AttachToRope__Array;
struct IDamageReciever__Array;
struct DetachRopeOnStomp__Fields {
    struct MonoBehaviour__Fields _;
    int32_t DetachmentsPerStomp;
    struct AttachToRope__Array* RopeAttachments;
    struct Vector3 _Position_k__BackingField;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DetachRopeOnStomp__Fields_FWDDECL)
#define IL2CPP_STRUCT_DetachRopeOnStomp__Fields_FWDDECL
#include <Modloader/app/structs/AttachToRope__Array.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#endif
#undef IL2CPP_STRUCT_DetachRopeOnStomp__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DetachRopeOnStomp__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DetachRopeOnStomp__Fields_FWDDECL)
#include <Modloader/app/structs/DetachRopeOnStomp__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DetachRopeOnStomp__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
