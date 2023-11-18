#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStatesExcludedFromRecording__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStatesExcludedFromRecording__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStatesExcludedFromRecording__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStatesExcludedFromRecording__Fields_DEFINED
struct List_1_Moon_UberIDOwnerSO_;
struct HashSet_1_System_String_;
struct UberStatesExcludedFromRecording__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_Moon_UberIDOwnerSO_* Excluded;
    struct HashSet_1_System_String_* m_assetGuids;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStatesExcludedFromRecording__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberStatesExcludedFromRecording__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_System_String_.h>
#include <Modloader/app/structs/List_1_Moon_UberIDOwnerSO_.h>
#endif
#undef IL2CPP_STRUCT_UberStatesExcludedFromRecording__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStatesExcludedFromRecording__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberStatesExcludedFromRecording__Fields_FWDDECL)
#include <Modloader/app/structs/UberStatesExcludedFromRecording__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStatesExcludedFromRecording__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
