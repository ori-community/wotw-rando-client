#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSTestFields_FieldDef__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSTestFields_FieldDef__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSTestFields_FieldDef__Boxed_DEFINED)
#include <Modloader/app/structs/FPSTestFields_FieldDef.h>
#if defined(IL2CPP_STRUCT_FPSTestFields_FieldDef_DEFINED)
#define IL2CPP_STRUCT_FPSTestFields_FieldDef__Boxed_DEFINED
struct FPSTestFields_FieldDef__Class;
struct FPSTestFields_FieldDef__Boxed {
    struct FPSTestFields_FieldDef__Class* klass;
    MonitorData* monitor;
    struct FPSTestFields_FieldDef fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSTestFields_FieldDef__Boxed_FWDDECL)
#define IL2CPP_STRUCT_FPSTestFields_FieldDef__Boxed_FWDDECL
#include <Modloader/app/structs/FPSTestFields_FieldDef__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSTestFields_FieldDef__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSTestFields_FieldDef__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_FPSTestFields_FieldDef__Boxed_FWDDECL)
#include <Modloader/app/structs/FPSTestFields_FieldDef__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSTestFields_FieldDef__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
