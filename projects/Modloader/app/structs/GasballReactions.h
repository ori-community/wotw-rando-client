#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballReactions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballReactions_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballReactions_DEFINED)
#include <Modloader/app/structs/GasballReactions__Fields.h>
#if defined(IL2CPP_STRUCT_GasballReactions__Fields_DEFINED)
#define IL2CPP_STRUCT_GasballReactions_DEFINED
struct GasballReactions__Class;
struct GasballReactions {
    struct GasballReactions__Class* klass;
    MonitorData* monitor;
    struct GasballReactions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballReactions_FWDDECL)
#define IL2CPP_STRUCT_GasballReactions_FWDDECL
#include <Modloader/app/structs/GasballReactions__Class.h>
#endif
#undef IL2CPP_STRUCT_GasballReactions_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballReactions_DEFINED) && !defined(IL2CPP_STRUCT_GasballReactions_FWDDECL)
#include <Modloader/app/structs/GasballReactions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballReactions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
