#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateChangeProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateChangeProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateChangeProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_StateChangeProvider__Fields_DEFINED
struct MoonReference_1_IGenericUberState_;
struct List_1_Moon_DesiredStateTransitionInfo_;
struct __declspec(align(8)) StateChangeProvider__Fields {
    struct MoonReference_1_IGenericUberState_* UberState;
    struct List_1_Moon_DesiredStateTransitionInfo_* m_desiredStates;
};
#endif
#if !defined(IL2CPP_STRUCT_StateChangeProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_StateChangeProvider__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_DesiredStateTransitionInfo_.h>
#include <Modloader/app/structs/MoonReference_1_IGenericUberState_.h>
#endif
#undef IL2CPP_STRUCT_StateChangeProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateChangeProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StateChangeProvider__Fields_FWDDECL)
#include <Modloader/app/structs/StateChangeProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateChangeProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
