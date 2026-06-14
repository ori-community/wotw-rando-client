#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CountUberState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CountUberState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CountUberState__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/UberIDOwnerSO__Fields.h>
#if defined(IL2CPP_STRUCT_UberIDOwnerSO__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_CountUberState__Fields_DEFINED
struct UberStateGroup;
struct UberID;
struct List_1_UberStateCondition_;
struct NamedValues_1_System_Int32_;
struct CountUberState__Fields {
    struct UberIDOwnerSO__Fields _;
    int32_t EditorValue;
    struct UberStateGroup* Group;
    struct UberID* m_cachedGroupID;
    bool m_isGroupIDCached;
    struct List_1_UberStateCondition_* Descriptors;
    struct NamedValues_1_System_Int32_* NamedValues;
    struct Nullable_1_Single_ _VolitileGenericOverrideValue_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CountUberState__Fields_FWDDECL)
#define IL2CPP_STRUCT_CountUberState__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UberStateCondition_.h>
#include <Modloader/app/structs/NamedValues_1_System_Int32_.h>
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/UberStateGroup.h>
#endif
#undef IL2CPP_STRUCT_CountUberState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CountUberState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CountUberState__Fields_FWDDECL)
#include <Modloader/app/structs/CountUberState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CountUberState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
