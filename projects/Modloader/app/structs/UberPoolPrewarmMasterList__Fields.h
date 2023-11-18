#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPrewarmMasterList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPrewarmMasterList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPrewarmMasterList__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolPrewarmMasterList__Fields_DEFINED
struct UberPoolPrewarmMasterList_PrewarmConfig__Array;
struct UberPoolPrewarmMasterList__Fields {
    struct ScriptableObject__Fields _;
    struct UberPoolPrewarmMasterList_PrewarmConfig__Array* PrewarmConfigs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPrewarmMasterList__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPrewarmMasterList__Fields_FWDDECL
#include <Modloader/app/structs/UberPoolPrewarmMasterList_PrewarmConfig__Array.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPrewarmMasterList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPrewarmMasterList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPrewarmMasterList__Fields_FWDDECL)
#include <Modloader/app/structs/UberPoolPrewarmMasterList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPrewarmMasterList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
