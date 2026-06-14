#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateCollection__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateCollection__Fields_DEFINED
struct List_1_UnityEngine_ScriptableObject_;
struct IUberState__Array;
struct List_1_Moon_INonSerializedUberState_;
struct List_1_Moon_IExternallyModifiableUberState_;
struct ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_;
struct Dictionary_2_System_Int32_Moon_UberStateCollectionGroup_;
struct UberStateCollection__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_UnityEngine_ScriptableObject_* m_descriptors;
    struct IUberState__Array* m_descriptorsArray;
    struct List_1_Moon_INonSerializedUberState_* m_nonSerializedUberStates;
    struct List_1_Moon_IExternallyModifiableUberState_* m_externallModifiableUberStates;
    struct ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_* m_readOnlyExternallyModifiableUberStates;
    bool m_hasReadOnlyCollection;
    struct Dictionary_2_System_Int32_Moon_UberStateCollectionGroup_* UberStateDescriptorGroups;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberStateCollection__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_UberStateCollectionGroup_.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_Moon_IExternallyModifiableUberState_.h>
#include <Modloader/app/structs/List_1_Moon_INonSerializedUberState_.h>
#include <Modloader/app/structs/List_1_UnityEngine_ScriptableObject_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_Moon_IExternallyModifiableUberState_.h>
#endif
#undef IL2CPP_STRUCT_UberStateCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateCollection__Fields_FWDDECL)
#include <Modloader/app/structs/UberStateCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
