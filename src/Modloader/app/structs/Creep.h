#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Creep_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Creep_INITIALIZING
#if !defined(IL2CPP_STRUCT_Creep_DEFINED)
#include <Modloader/app/structs/Creep__Fields.h>
#if defined(IL2CPP_STRUCT_Creep__Fields_DEFINED)
#define IL2CPP_STRUCT_Creep_DEFINED
struct Creep__Class;
struct Creep {
    struct Creep__Class* klass;
    MonitorData* monitor;
    struct Creep__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Creep_FWDDECL)
#define IL2CPP_STRUCT_Creep_FWDDECL
#include <Modloader/app/structs/Creep__Class.h>
#endif
#undef IL2CPP_STRUCT_Creep_INITIALIZING
#if !defined(IL2CPP_STRUCT_Creep_DEFINED) && !defined(IL2CPP_STRUCT_Creep_FWDDECL)
#include <Modloader/app/structs/Creep.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Creep.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
