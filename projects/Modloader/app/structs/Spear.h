#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Spear_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Spear_INITIALIZING
#if !defined(IL2CPP_STRUCT_Spear_DEFINED)
#include <Modloader/app/structs/Spear__Fields.h>
#if defined(IL2CPP_STRUCT_Spear__Fields_DEFINED)
#define IL2CPP_STRUCT_Spear_DEFINED
struct Spear__Class;
struct Spear {
    struct Spear__Class* klass;
    MonitorData* monitor;
    struct Spear__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Spear_FWDDECL)
#define IL2CPP_STRUCT_Spear_FWDDECL
#include <Modloader/app/structs/Spear__Class.h>
#endif
#undef IL2CPP_STRUCT_Spear_INITIALIZING
#if !defined(IL2CPP_STRUCT_Spear_DEFINED) && !defined(IL2CPP_STRUCT_Spear_FWDDECL)
#include <Modloader/app/structs/Spear.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Spear.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
