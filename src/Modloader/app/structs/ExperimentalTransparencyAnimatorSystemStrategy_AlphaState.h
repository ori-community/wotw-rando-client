#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExperimentalTransparencyAnimatorSystemStrategy_AlphaState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExperimentalTransparencyAnimatorSystemStrategy_AlphaState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExperimentalTransparencyAnimatorSystemStrategy_AlphaState_DEFINED)
#include <Modloader/app/structs/HandoverMode__Enum.h>
#include <Modloader/app/structs/TransparencyMode__Enum.h>
#if defined(IL2CPP_STRUCT_HandoverMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_TransparencyMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ExperimentalTransparencyAnimatorSystemStrategy_AlphaState_DEFINED
struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState {
    float Original;
    float Current;
    float HandoverValue;
    bool HasHandover;
    bool IsSet;
    HandoverMode__Enum LastHandoverMode;

    TransparencyMode__Enum LastTransparencyMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExperimentalTransparencyAnimatorSystemStrategy_AlphaState_FWDDECL)
#define IL2CPP_STRUCT_ExperimentalTransparencyAnimatorSystemStrategy_AlphaState_FWDDECL
#endif
#undef IL2CPP_STRUCT_ExperimentalTransparencyAnimatorSystemStrategy_AlphaState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExperimentalTransparencyAnimatorSystemStrategy_AlphaState_DEFINED) && !defined(IL2CPP_STRUCT_ExperimentalTransparencyAnimatorSystemStrategy_AlphaState_FWDDECL)
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_AlphaState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_AlphaState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
