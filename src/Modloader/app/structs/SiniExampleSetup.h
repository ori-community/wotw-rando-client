#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SiniExampleSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SiniExampleSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SiniExampleSetup_DEFINED)
#include <Modloader/app/structs/SiniExampleSetup__Fields.h>
#if defined(IL2CPP_STRUCT_SiniExampleSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_SiniExampleSetup_DEFINED
struct SiniExampleSetup__Class;
struct SiniExampleSetup {
    struct SiniExampleSetup__Class* klass;
    MonitorData* monitor;
    struct SiniExampleSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SiniExampleSetup_FWDDECL)
#define IL2CPP_STRUCT_SiniExampleSetup_FWDDECL
#include <Modloader/app/structs/SiniExampleSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_SiniExampleSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SiniExampleSetup_DEFINED) && !defined(IL2CPP_STRUCT_SiniExampleSetup_FWDDECL)
#include <Modloader/app/structs/SiniExampleSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SiniExampleSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
