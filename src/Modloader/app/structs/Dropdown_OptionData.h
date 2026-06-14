#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dropdown_OptionData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dropdown_OptionData_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown_OptionData_DEFINED)
#include <Modloader/app/structs/Dropdown_OptionData__Fields.h>
#if defined(IL2CPP_STRUCT_Dropdown_OptionData__Fields_DEFINED)
#define IL2CPP_STRUCT_Dropdown_OptionData_DEFINED
struct Dropdown_OptionData__Class;
struct Dropdown_OptionData {
    struct Dropdown_OptionData__Class* klass;
    MonitorData* monitor;
    struct Dropdown_OptionData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Dropdown_OptionData_FWDDECL)
#define IL2CPP_STRUCT_Dropdown_OptionData_FWDDECL
#include <Modloader/app/structs/Dropdown_OptionData__Class.h>
#endif
#undef IL2CPP_STRUCT_Dropdown_OptionData_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown_OptionData_DEFINED) && !defined(IL2CPP_STRUCT_Dropdown_OptionData_FWDDECL)
#include <Modloader/app/structs/Dropdown_OptionData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dropdown_OptionData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
