#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dropdown_DropdownItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dropdown_DropdownItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown_DropdownItem_DEFINED)
#include <Modloader/app/structs/Dropdown_DropdownItem__Fields.h>
#if defined(IL2CPP_STRUCT_Dropdown_DropdownItem__Fields_DEFINED)
#define IL2CPP_STRUCT_Dropdown_DropdownItem_DEFINED
struct Dropdown_DropdownItem__Class;
struct Dropdown_DropdownItem {
    struct Dropdown_DropdownItem__Class* klass;
    MonitorData* monitor;
    struct Dropdown_DropdownItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Dropdown_DropdownItem_FWDDECL)
#define IL2CPP_STRUCT_Dropdown_DropdownItem_FWDDECL
#include <Modloader/app/structs/Dropdown_DropdownItem__Class.h>
#endif
#undef IL2CPP_STRUCT_Dropdown_DropdownItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown_DropdownItem_DEFINED) && !defined(IL2CPP_STRUCT_Dropdown_DropdownItem_FWDDECL)
#include <Modloader/app/structs/Dropdown_DropdownItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dropdown_DropdownItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
