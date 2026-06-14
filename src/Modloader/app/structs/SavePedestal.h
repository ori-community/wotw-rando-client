#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SavePedestal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SavePedestal_INITIALIZING
#if !defined(IL2CPP_STRUCT_SavePedestal_DEFINED)
#include <Modloader/app/structs/SavePedestal__Fields.h>
#if defined(IL2CPP_STRUCT_SavePedestal__Fields_DEFINED)
#define IL2CPP_STRUCT_SavePedestal_DEFINED
struct SavePedestal__Class;
struct SavePedestal {
    struct SavePedestal__Class* klass;
    MonitorData* monitor;
    struct SavePedestal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SavePedestal_FWDDECL)
#define IL2CPP_STRUCT_SavePedestal_FWDDECL
#include <Modloader/app/structs/SavePedestal__Class.h>
#endif
#undef IL2CPP_STRUCT_SavePedestal_INITIALIZING
#if !defined(IL2CPP_STRUCT_SavePedestal_DEFINED) && !defined(IL2CPP_STRUCT_SavePedestal_FWDDECL)
#include <Modloader/app/structs/SavePedestal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SavePedestal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
