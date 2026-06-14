#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalComboDefinition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalComboDefinition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalComboDefinition__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_GlobalComboDefinition__Fields_DEFINED
struct Dictionary_2_System_Type_List_1_System_Type_;
struct List_1_Moon_ComboSystem_ComboDataEntry_;
struct Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry_;
struct GlobalComboDefinition__Fields {
    struct ScriptableObject__Fields _;
    struct Dictionary_2_System_Type_List_1_System_Type_* TransitionsMap;
    struct List_1_Moon_ComboSystem_ComboDataEntry_* Combos;
    struct Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry_* m_entryByType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalComboDefinition__Fields_FWDDECL)
#define IL2CPP_STRUCT_GlobalComboDefinition__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Type_List_1_System_Type_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry_.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_ComboDataEntry_.h>
#endif
#undef IL2CPP_STRUCT_GlobalComboDefinition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalComboDefinition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GlobalComboDefinition__Fields_FWDDECL)
#include <Modloader/app/structs/GlobalComboDefinition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalComboDefinition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
