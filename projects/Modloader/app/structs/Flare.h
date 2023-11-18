#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Flare_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Flare_INITIALIZING
#if !defined(IL2CPP_STRUCT_Flare_DEFINED)
#include <Modloader/app/structs/Flare__Fields.h>
#if defined(IL2CPP_STRUCT_Flare__Fields_DEFINED)
#define IL2CPP_STRUCT_Flare_DEFINED
struct Flare__Class;
struct Flare {
    struct Flare__Class* klass;
    MonitorData* monitor;
    struct Flare__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Flare_FWDDECL)
#define IL2CPP_STRUCT_Flare_FWDDECL
#include <Modloader/app/structs/Flare__Class.h>
#endif
#undef IL2CPP_STRUCT_Flare_INITIALIZING
#if !defined(IL2CPP_STRUCT_Flare_DEFINED) && !defined(IL2CPP_STRUCT_Flare_FWDDECL)
#include <Modloader/app/structs/Flare.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Flare.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
