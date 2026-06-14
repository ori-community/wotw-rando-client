#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dropdown_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dropdown_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown_DEFINED)
#include <Modloader/app/structs/Dropdown__Fields.h>
#if defined(IL2CPP_STRUCT_Dropdown__Fields_DEFINED)
#define IL2CPP_STRUCT_Dropdown_DEFINED
struct Dropdown__Class;
struct Dropdown {
    struct Dropdown__Class* klass;
    MonitorData* monitor;
    struct Dropdown__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Dropdown_FWDDECL)
#define IL2CPP_STRUCT_Dropdown_FWDDECL
#include <Modloader/app/structs/Dropdown__Class.h>
#endif
#undef IL2CPP_STRUCT_Dropdown_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown_DEFINED) && !defined(IL2CPP_STRUCT_Dropdown_FWDDECL)
#include <Modloader/app/structs/Dropdown.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dropdown.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
