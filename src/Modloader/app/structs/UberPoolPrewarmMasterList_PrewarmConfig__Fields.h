#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPrewarmMasterList_PrewarmConfig__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPrewarmMasterList_PrewarmConfig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPrewarmMasterList_PrewarmConfig__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolPrewarmMasterList_PrewarmConfig__Fields_DEFINED
struct String;
struct GameObject;
struct List_1_Moon_pooling_UberPoolPrewarmMasterList_PrewarmCouple_;
struct __declspec(align(8)) UberPoolPrewarmMasterList_PrewarmConfig__Fields {
    struct String* ConfigID;
    struct GameObject* Prefab;
    struct List_1_Moon_pooling_UberPoolPrewarmMasterList_PrewarmCouple_* PrewarmSets;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPrewarmMasterList_PrewarmConfig__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPrewarmMasterList_PrewarmConfig__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_Moon_pooling_UberPoolPrewarmMasterList_PrewarmCouple_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPrewarmMasterList_PrewarmConfig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPrewarmMasterList_PrewarmConfig__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPrewarmMasterList_PrewarmConfig__Fields_FWDDECL)
#include <Modloader/app/structs/UberPoolPrewarmMasterList_PrewarmConfig__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPrewarmMasterList_PrewarmConfig__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
