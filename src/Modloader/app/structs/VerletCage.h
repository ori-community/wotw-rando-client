#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletCage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletCage_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletCage_DEFINED)
#include <Modloader/app/structs/VerletCage__Fields.h>
#if defined(IL2CPP_STRUCT_VerletCage__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletCage_DEFINED
struct VerletCage__Class;
struct VerletCage {
    struct VerletCage__Class* klass;
    MonitorData* monitor;
    struct VerletCage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletCage_FWDDECL)
#define IL2CPP_STRUCT_VerletCage_FWDDECL
#include <Modloader/app/structs/VerletCage__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletCage_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletCage_DEFINED) && !defined(IL2CPP_STRUCT_VerletCage_FWDDECL)
#include <Modloader/app/structs/VerletCage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletCage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
