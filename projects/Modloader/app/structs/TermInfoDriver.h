#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TermInfoDriver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TermInfoDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_TermInfoDriver_DEFINED)
#include <Modloader/app/structs/TermInfoDriver__Fields.h>
#if defined(IL2CPP_STRUCT_TermInfoDriver__Fields_DEFINED)
#define IL2CPP_STRUCT_TermInfoDriver_DEFINED
struct TermInfoDriver__Class;
struct TermInfoDriver {
    struct TermInfoDriver__Class* klass;
    MonitorData* monitor;
    struct TermInfoDriver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TermInfoDriver_FWDDECL)
#define IL2CPP_STRUCT_TermInfoDriver_FWDDECL
#include <Modloader/app/structs/TermInfoDriver__Class.h>
#endif
#undef IL2CPP_STRUCT_TermInfoDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_TermInfoDriver_DEFINED) && !defined(IL2CPP_STRUCT_TermInfoDriver_FWDDECL)
#include <Modloader/app/structs/TermInfoDriver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TermInfoDriver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
