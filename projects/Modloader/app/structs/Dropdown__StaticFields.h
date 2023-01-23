#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dropdown__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dropdown__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Dropdown__StaticFields_DEFINED
struct Dropdown_OptionData;
struct Dropdown__StaticFields {
    struct Dropdown_OptionData* s_NoOptionData;
};
#endif
#if !defined(IL2CPP_STRUCT_Dropdown__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Dropdown__StaticFields_FWDDECL
#include <Modloader/app/structs/Dropdown_OptionData.h>
#endif
#undef IL2CPP_STRUCT_Dropdown__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Dropdown__StaticFields_FWDDECL)
#include <Modloader/app/structs/Dropdown__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dropdown__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
