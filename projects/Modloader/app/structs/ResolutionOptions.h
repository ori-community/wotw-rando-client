#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResolutionOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResolutionOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResolutionOptions_DEFINED)
#include <Modloader/app/structs/ResolutionOptions__Fields.h>
#if defined(IL2CPP_STRUCT_ResolutionOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_ResolutionOptions_DEFINED
struct ResolutionOptions__Class;
struct ResolutionOptions {
    struct ResolutionOptions__Class* klass;
    MonitorData* monitor;
    struct ResolutionOptions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResolutionOptions_FWDDECL)
#define IL2CPP_STRUCT_ResolutionOptions_FWDDECL
#include <Modloader/app/structs/ResolutionOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_ResolutionOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResolutionOptions_DEFINED) && !defined(IL2CPP_STRUCT_ResolutionOptions_FWDDECL)
#include <Modloader/app/structs/ResolutionOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResolutionOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
