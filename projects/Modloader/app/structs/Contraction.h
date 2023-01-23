#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Contraction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Contraction_INITIALIZING
#if !defined(IL2CPP_STRUCT_Contraction_DEFINED)
#include <Modloader/app/structs/Contraction__Fields.h>
#if defined(IL2CPP_STRUCT_Contraction__Fields_DEFINED)
#define IL2CPP_STRUCT_Contraction_DEFINED
struct Contraction__Class;
struct Contraction {
    struct Contraction__Class* klass;
    MonitorData* monitor;
    struct Contraction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Contraction_FWDDECL)
#define IL2CPP_STRUCT_Contraction_FWDDECL
#include <Modloader/app/structs/Contraction__Class.h>
#endif
#undef IL2CPP_STRUCT_Contraction_INITIALIZING
#if !defined(IL2CPP_STRUCT_Contraction_DEFINED) && !defined(IL2CPP_STRUCT_Contraction_FWDDECL)
#include <Modloader/app/structs/Contraction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Contraction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
