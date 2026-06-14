#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrivableGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrivableGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivableGroup__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DrivableGroup__Fields_DEFINED
struct String;
struct HashSet_1_Moon_IDrivable_;
struct List_1_Moon_IDrivable_;
struct DrivableGroup__Fields {
    struct MonoBehaviour__Fields _;
    struct String* m_groupName;
    struct HashSet_1_Moon_IDrivable_* m_drivablesHash;
    struct List_1_Moon_IDrivable_* m_drivables;
    bool _IsActive_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrivableGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_DrivableGroup__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_Moon_IDrivable_.h>
#include <Modloader/app/structs/List_1_Moon_IDrivable_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DrivableGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivableGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DrivableGroup__Fields_FWDDECL)
#include <Modloader/app/structs/DrivableGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrivableGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
