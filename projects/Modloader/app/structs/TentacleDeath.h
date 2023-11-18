#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleDeath_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleDeath_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleDeath_DEFINED)
#include <Modloader/app/structs/TentacleDeath__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleDeath__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleDeath_DEFINED
struct TentacleDeath__Class;
struct TentacleDeath {
    struct TentacleDeath__Class* klass;
    MonitorData* monitor;
    struct TentacleDeath__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleDeath_FWDDECL)
#define IL2CPP_STRUCT_TentacleDeath_FWDDECL
#include <Modloader/app/structs/TentacleDeath__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleDeath_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleDeath_DEFINED) && !defined(IL2CPP_STRUCT_TentacleDeath_FWDDECL)
#include <Modloader/app/structs/TentacleDeath.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleDeath.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
