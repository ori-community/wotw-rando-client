#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SelfDestruct__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SelfDestruct__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelfDestruct__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_SelfDestruct__Fields_DEFINED
struct LegacyEntity;
struct SelfDestruct__Fields {
    struct Suspendable__Fields _;
    float WaitTime;
    struct LegacyEntity* Entity;
    bool HalfTimeOnEasy;
    float m_timeRemaining;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SelfDestruct__Fields_FWDDECL)
#define IL2CPP_STRUCT_SelfDestruct__Fields_FWDDECL
#include <Modloader/app/structs/LegacyEntity.h>
#endif
#undef IL2CPP_STRUCT_SelfDestruct__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelfDestruct__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SelfDestruct__Fields_FWDDECL)
#include <Modloader/app/structs/SelfDestruct__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SelfDestruct__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
