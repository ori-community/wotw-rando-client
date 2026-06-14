#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSTestFields_FieldDef_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSTestFields_FieldDef_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSTestFields_FieldDef_DEFINED)
#include <Modloader/app/structs/FPSTestFields_Field__Enum.h>
#include <Modloader/app/structs/FPSTestFields_Scope__Enum.h>
#if defined(IL2CPP_STRUCT_FPSTestFields_Field__Enum_DEFINED) && defined(IL2CPP_STRUCT_FPSTestFields_Scope__Enum_DEFINED)
#define IL2CPP_STRUCT_FPSTestFields_FieldDef_DEFINED
struct String;
struct FPSTestFields_FieldDef {
    FPSTestFields_Field__Enum field;

    struct String* title;
    FPSTestFields_Scope__Enum scope;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSTestFields_FieldDef_FWDDECL)
#define IL2CPP_STRUCT_FPSTestFields_FieldDef_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FPSTestFields_FieldDef_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSTestFields_FieldDef_DEFINED) && !defined(IL2CPP_STRUCT_FPSTestFields_FieldDef_FWDDECL)
#include <Modloader/app/structs/FPSTestFields_FieldDef.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSTestFields_FieldDef.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
