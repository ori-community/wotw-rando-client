#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionStateOwner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionStateOwner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionStateOwner__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PositionStateOwner__Fields_DEFINED
struct DynamicDataResolver;
struct SerializedBooleanUberState;
struct Transform;
struct IUberState__Array;
struct PositionStateOwner__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct SerializedBooleanUberState* StateDescriptor;
    struct Vector3 LocalStartPosition;
    struct Vector3 LocalEndPosition;
    struct Transform* Platform;
    float LastStartedValue;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionStateOwner__Fields_FWDDECL)
#define IL2CPP_STRUCT_PositionStateOwner__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PositionStateOwner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionStateOwner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PositionStateOwner__Fields_FWDDECL)
#include <Modloader/app/structs/PositionStateOwner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionStateOwner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
