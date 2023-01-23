#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarCreep_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarCreep_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarCreep_DEFINED)
#include <Modloader/app/structs/MortarCreep__Fields.h>
#if defined(IL2CPP_STRUCT_MortarCreep__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarCreep_DEFINED
struct MortarCreep__Class;
struct MortarCreep {
    struct MortarCreep__Class* klass;
    MonitorData* monitor;
    struct MortarCreep__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarCreep_FWDDECL)
#define IL2CPP_STRUCT_MortarCreep_FWDDECL
#include <Modloader/app/structs/MortarCreep__Class.h>
#endif
#undef IL2CPP_STRUCT_MortarCreep_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarCreep_DEFINED) && !defined(IL2CPP_STRUCT_MortarCreep_FWDDECL)
#include <Modloader/app/structs/MortarCreep.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarCreep.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
