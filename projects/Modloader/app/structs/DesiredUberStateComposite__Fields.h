#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredUberStateComposite__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredUberStateComposite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateComposite__Fields_DEFINED)
#define IL2CPP_STRUCT_DesiredUberStateComposite__Fields_DEFINED
struct List_1_DesiredUberStateBool_;
struct List_1_DesiredUberStateFloat_;
struct List_1_DesiredUberStateInt_;
struct List_1_DesiredUberStateByte_;
struct List_1_Moon_IUberState_;
struct __declspec(align(8)) DesiredUberStateComposite__Fields {
    struct List_1_DesiredUberStateBool_* BoolRequirements;
    struct List_1_DesiredUberStateFloat_* FloatRequirements;
    struct List_1_DesiredUberStateInt_* IntRequirements;
    struct List_1_DesiredUberStateByte_* ByteRequirements;
    struct List_1_Moon_IUberState_* m_allDescriptors;
};
#endif
#if !defined(IL2CPP_STRUCT_DesiredUberStateComposite__Fields_FWDDECL)
#define IL2CPP_STRUCT_DesiredUberStateComposite__Fields_FWDDECL
#include <Modloader/app/structs/List_1_DesiredUberStateBool_.h>
#include <Modloader/app/structs/List_1_DesiredUberStateByte_.h>
#include <Modloader/app/structs/List_1_DesiredUberStateFloat_.h>
#include <Modloader/app/structs/List_1_DesiredUberStateInt_.h>
#include <Modloader/app/structs/List_1_Moon_IUberState_.h>
#endif
#undef IL2CPP_STRUCT_DesiredUberStateComposite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateComposite__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DesiredUberStateComposite__Fields_FWDDECL)
#include <Modloader/app/structs/DesiredUberStateComposite__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredUberStateComposite__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
