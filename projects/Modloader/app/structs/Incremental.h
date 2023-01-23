#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Incremental_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Incremental_INITIALIZING
#if !defined(IL2CPP_STRUCT_Incremental_DEFINED)
#include <Modloader/app/structs/Incremental__Fields.h>
#if defined(IL2CPP_STRUCT_Incremental__Fields_DEFINED)
#define IL2CPP_STRUCT_Incremental_DEFINED
struct Incremental__Class;
struct Incremental {
    struct Incremental__Class* klass;
    MonitorData* monitor;
    struct Incremental__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Incremental_FWDDECL)
#define IL2CPP_STRUCT_Incremental_FWDDECL
#include <Modloader/app/structs/Incremental__Class.h>
#endif
#undef IL2CPP_STRUCT_Incremental_INITIALIZING
#if !defined(IL2CPP_STRUCT_Incremental_DEFINED) && !defined(IL2CPP_STRUCT_Incremental_FWDDECL)
#include <Modloader/app/structs/Incremental.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Incremental.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
