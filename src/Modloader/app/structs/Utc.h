#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Utc_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Utc_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utc_DEFINED)
#include <Modloader/app/structs/Utc__Fields.h>
#if defined(IL2CPP_STRUCT_Utc__Fields_DEFINED)
#define IL2CPP_STRUCT_Utc_DEFINED
struct Utc__Class;
struct Utc {
    struct Utc__Class* klass;
    MonitorData* monitor;
    struct Utc__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Utc_FWDDECL)
#define IL2CPP_STRUCT_Utc_FWDDECL
#include <Modloader/app/structs/Utc__Class.h>
#endif
#undef IL2CPP_STRUCT_Utc_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utc_DEFINED) && !defined(IL2CPP_STRUCT_Utc_FWDDECL)
#include <Modloader/app/structs/Utc.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Utc.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
