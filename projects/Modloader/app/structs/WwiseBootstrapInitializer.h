#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseBootstrapInitializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseBootstrapInitializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseBootstrapInitializer_DEFINED)
#include <Modloader/app/structs/WwiseBootstrapInitializer__Fields.h>
#if defined(IL2CPP_STRUCT_WwiseBootstrapInitializer__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseBootstrapInitializer_DEFINED
struct WwiseBootstrapInitializer__Class;
struct WwiseBootstrapInitializer {
    struct WwiseBootstrapInitializer__Class* klass;
    MonitorData* monitor;
    struct WwiseBootstrapInitializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseBootstrapInitializer_FWDDECL)
#define IL2CPP_STRUCT_WwiseBootstrapInitializer_FWDDECL
#include <Modloader/app/structs/WwiseBootstrapInitializer__Class.h>
#endif
#undef IL2CPP_STRUCT_WwiseBootstrapInitializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseBootstrapInitializer_DEFINED) && !defined(IL2CPP_STRUCT_WwiseBootstrapInitializer_FWDDECL)
#include <Modloader/app/structs/WwiseBootstrapInitializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseBootstrapInitializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
