#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sample_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sample_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sample_DEFINED)
#include <Modloader/app/structs/Sample__Fields.h>
#if defined(IL2CPP_STRUCT_Sample__Fields_DEFINED)
#define IL2CPP_STRUCT_Sample_DEFINED
struct Sample__Class;
struct Sample {
    struct Sample__Class* klass;
    MonitorData* monitor;
    struct Sample__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Sample_FWDDECL)
#define IL2CPP_STRUCT_Sample_FWDDECL
#include <Modloader/app/structs/Sample__Class.h>
#endif
#undef IL2CPP_STRUCT_Sample_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sample_DEFINED) && !defined(IL2CPP_STRUCT_Sample_FWDDECL)
#include <Modloader/app/structs/Sample.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sample.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
