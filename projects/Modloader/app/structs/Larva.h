#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Larva_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Larva_INITIALIZING
#if !defined(IL2CPP_STRUCT_Larva_DEFINED)
#include <Modloader/app/structs/Larva__Fields.h>
#if defined(IL2CPP_STRUCT_Larva__Fields_DEFINED)
#define IL2CPP_STRUCT_Larva_DEFINED
struct Larva__Class;
struct Larva {
    struct Larva__Class* klass;
    MonitorData* monitor;
    struct Larva__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Larva_FWDDECL)
#define IL2CPP_STRUCT_Larva_FWDDECL
#include <Modloader/app/structs/Larva__Class.h>
#endif
#undef IL2CPP_STRUCT_Larva_INITIALIZING
#if !defined(IL2CPP_STRUCT_Larva_DEFINED) && !defined(IL2CPP_STRUCT_Larva_FWDDECL)
#include <Modloader/app/structs/Larva.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Larva.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
