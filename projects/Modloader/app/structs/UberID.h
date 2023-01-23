#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberID_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberID_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberID_DEFINED)
#include <Modloader/app/structs/UberID__Fields.h>
#if defined(IL2CPP_STRUCT_UberID__Fields_DEFINED)
#define IL2CPP_STRUCT_UberID_DEFINED
struct UberID__Class;
struct UberID {
    struct UberID__Class* klass;
    MonitorData* monitor;
    struct UberID__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberID_FWDDECL)
#define IL2CPP_STRUCT_UberID_FWDDECL
#include <Modloader/app/structs/UberID__Class.h>
#endif
#undef IL2CPP_STRUCT_UberID_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberID_DEFINED) && !defined(IL2CPP_STRUCT_UberID_FWDDECL)
#include <Modloader/app/structs/UberID.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberID.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
