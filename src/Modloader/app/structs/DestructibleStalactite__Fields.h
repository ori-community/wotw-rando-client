#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestructibleStalactite__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestructibleStalactite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestructibleStalactite__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DestructibleStalactite__Fields_DEFINED
struct IDamageReciever__Array;
struct DestructibleStalactite__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 _Position_k__BackingField;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestructibleStalactite__Fields_FWDDECL)
#define IL2CPP_STRUCT_DestructibleStalactite__Fields_FWDDECL
#include <Modloader/app/structs/IDamageReciever__Array.h>
#endif
#undef IL2CPP_STRUCT_DestructibleStalactite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestructibleStalactite__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DestructibleStalactite__Fields_FWDDECL)
#include <Modloader/app/structs/DestructibleStalactite__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestructibleStalactite__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
