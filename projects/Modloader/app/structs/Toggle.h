#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Toggle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Toggle_INITIALIZING
#if !defined(IL2CPP_STRUCT_Toggle_DEFINED)
#include <Modloader/app/structs/Toggle__Fields.h>
#if defined(IL2CPP_STRUCT_Toggle__Fields_DEFINED)
#define IL2CPP_STRUCT_Toggle_DEFINED
struct Toggle__Class;
struct Toggle {
    struct Toggle__Class* klass;
    MonitorData* monitor;
    struct Toggle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Toggle_FWDDECL)
#define IL2CPP_STRUCT_Toggle_FWDDECL
#include <Modloader/app/structs/Toggle__Class.h>
#endif
#undef IL2CPP_STRUCT_Toggle_INITIALIZING
#if !defined(IL2CPP_STRUCT_Toggle_DEFINED) && !defined(IL2CPP_STRUCT_Toggle_FWDDECL)
#include <Modloader/app/structs/Toggle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Toggle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
