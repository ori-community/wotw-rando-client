#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvTopology_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvTopology_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvTopology_DEFINED)
#include <Modloader/app/structs/EnvTopology__Fields.h>
#if defined(IL2CPP_STRUCT_EnvTopology__Fields_DEFINED)
#define IL2CPP_STRUCT_EnvTopology_DEFINED
struct EnvTopology__Class;
struct EnvTopology {
    struct EnvTopology__Class* klass;
    MonitorData* monitor;
    struct EnvTopology__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvTopology_FWDDECL)
#define IL2CPP_STRUCT_EnvTopology_FWDDECL
#include <Modloader/app/structs/EnvTopology__Class.h>
#endif
#undef IL2CPP_STRUCT_EnvTopology_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvTopology_DEFINED) && !defined(IL2CPP_STRUCT_EnvTopology_FWDDECL)
#include <Modloader/app/structs/EnvTopology.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvTopology.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
