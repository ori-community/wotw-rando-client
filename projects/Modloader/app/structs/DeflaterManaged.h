#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflaterManaged_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflaterManaged_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflaterManaged_DEFINED)
#include <Modloader/app/structs/DeflaterManaged__Fields.h>
#if defined(IL2CPP_STRUCT_DeflaterManaged__Fields_DEFINED)
#define IL2CPP_STRUCT_DeflaterManaged_DEFINED
struct DeflaterManaged__Class;
struct DeflaterManaged {
    struct DeflaterManaged__Class* klass;
    MonitorData* monitor;
    struct DeflaterManaged__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeflaterManaged_FWDDECL)
#define IL2CPP_STRUCT_DeflaterManaged_FWDDECL
#include <Modloader/app/structs/DeflaterManaged__Class.h>
#endif
#undef IL2CPP_STRUCT_DeflaterManaged_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflaterManaged_DEFINED) && !defined(IL2CPP_STRUCT_DeflaterManaged_FWDDECL)
#include <Modloader/app/structs/DeflaterManaged.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflaterManaged.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
