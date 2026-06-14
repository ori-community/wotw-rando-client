#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tentacle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tentacle_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tentacle_DEFINED)
#include <Modloader/app/structs/Tentacle__Fields.h>
#if defined(IL2CPP_STRUCT_Tentacle__Fields_DEFINED)
#define IL2CPP_STRUCT_Tentacle_DEFINED
struct Tentacle__Class;
struct Tentacle {
    struct Tentacle__Class* klass;
    MonitorData* monitor;
    struct Tentacle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tentacle_FWDDECL)
#define IL2CPP_STRUCT_Tentacle_FWDDECL
#include <Modloader/app/structs/Tentacle__Class.h>
#endif
#undef IL2CPP_STRUCT_Tentacle_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tentacle_DEFINED) && !defined(IL2CPP_STRUCT_Tentacle_FWDDECL)
#include <Modloader/app/structs/Tentacle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tentacle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
