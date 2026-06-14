#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stomper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stomper_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stomper_DEFINED)
#include <Modloader/app/structs/Stomper__Fields.h>
#if defined(IL2CPP_STRUCT_Stomper__Fields_DEFINED)
#define IL2CPP_STRUCT_Stomper_DEFINED
struct Stomper__Class;
struct Stomper {
    struct Stomper__Class* klass;
    MonitorData* monitor;
    struct Stomper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Stomper_FWDDECL)
#define IL2CPP_STRUCT_Stomper_FWDDECL
#include <Modloader/app/structs/Stomper__Class.h>
#endif
#undef IL2CPP_STRUCT_Stomper_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stomper_DEFINED) && !defined(IL2CPP_STRUCT_Stomper_FWDDECL)
#include <Modloader/app/structs/Stomper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stomper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
