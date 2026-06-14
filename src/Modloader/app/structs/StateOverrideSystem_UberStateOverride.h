#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateOverrideSystem_UberStateOverride_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateOverrideSystem_UberStateOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateOverrideSystem_UberStateOverride_DEFINED)
#include <Modloader/app/structs/Nullable_1_Single_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_StateOverrideSystem_UberStateOverride_DEFINED
struct IGenericUberState;
struct StateOverrideSystem_UberStateOverride {
    struct IGenericUberState* UberState;
    struct Nullable_1_Single_ DynamicDesiredState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateOverrideSystem_UberStateOverride_FWDDECL)
#define IL2CPP_STRUCT_StateOverrideSystem_UberStateOverride_FWDDECL
#include <Modloader/app/structs/IGenericUberState.h>
#endif
#undef IL2CPP_STRUCT_StateOverrideSystem_UberStateOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateOverrideSystem_UberStateOverride_DEFINED) && !defined(IL2CPP_STRUCT_StateOverrideSystem_UberStateOverride_FWDDECL)
#include <Modloader/app/structs/StateOverrideSystem_UberStateOverride.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateOverrideSystem_UberStateOverride.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
