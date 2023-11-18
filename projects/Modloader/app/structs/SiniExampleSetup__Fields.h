#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SiniExampleSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SiniExampleSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SiniExampleSetup__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SiniExampleSetup__Fields_DEFINED
struct MoonReference_1_IUberState_;
struct DesiredUberStateBool;
struct SiniExampleSetup__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_IUberState_* StateReferenceA;
    struct MoonReference_1_IUberState_* StateReferenceB;
    struct DesiredUberStateBool* ConcreteStateReferenceC;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SiniExampleSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_SiniExampleSetup__Fields_FWDDECL
#include <Modloader/app/structs/DesiredUberStateBool.h>
#include <Modloader/app/structs/MoonReference_1_IUberState_.h>
#endif
#undef IL2CPP_STRUCT_SiniExampleSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SiniExampleSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SiniExampleSetup__Fields_FWDDECL)
#include <Modloader/app/structs/SiniExampleSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SiniExampleSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
