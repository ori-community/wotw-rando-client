#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoolPref_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoolPref_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoolPref_DEFINED)
#include <Modloader/app/structs/BoolPref__Fields.h>
#if defined(IL2CPP_STRUCT_BoolPref__Fields_DEFINED)
#define IL2CPP_STRUCT_BoolPref_DEFINED
struct BoolPref__Class;
struct BoolPref {
    struct BoolPref__Class* klass;
    MonitorData* monitor;
    struct BoolPref__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BoolPref_FWDDECL)
#define IL2CPP_STRUCT_BoolPref_FWDDECL
#include <Modloader/app/structs/BoolPref__Class.h>
#endif
#undef IL2CPP_STRUCT_BoolPref_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoolPref_DEFINED) && !defined(IL2CPP_STRUCT_BoolPref_FWDDECL)
#include <Modloader/app/structs/BoolPref.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoolPref.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
