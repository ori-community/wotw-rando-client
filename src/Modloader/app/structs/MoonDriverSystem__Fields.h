#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDriverSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDriverSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDriverSystem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonDriverSystem__Fields_DEFINED
struct Dictionary_2_System_Type_Moon_IDrivableGroup_;
struct List_1_Moon_IDrivableGroup_;
struct Queue_1_Moon_IDrivable_;
struct List_1_Moon_IDrivable_;
struct MoonDriverSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct Dictionary_2_System_Type_Moon_IDrivableGroup_* m_groupMap;
    struct List_1_Moon_IDrivableGroup_* m_groups;
    struct Queue_1_Moon_IDrivable_* m_drivableRegistrationQueue;
    struct List_1_Moon_IDrivable_* m_drivables;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonDriverSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonDriverSystem__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Type_Moon_IDrivableGroup_.h>
#include <Modloader/app/structs/List_1_Moon_IDrivableGroup_.h>
#include <Modloader/app/structs/List_1_Moon_IDrivable_.h>
#include <Modloader/app/structs/Queue_1_Moon_IDrivable_.h>
#endif
#undef IL2CPP_STRUCT_MoonDriverSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDriverSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonDriverSystem__Fields_FWDDECL)
#include <Modloader/app/structs/MoonDriverSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDriverSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
