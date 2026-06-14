#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Identity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Identity_INITIALIZING
#if !defined(IL2CPP_STRUCT_Identity_DEFINED)
#include <Modloader/app/structs/Identity__Fields.h>
#if defined(IL2CPP_STRUCT_Identity__Fields_DEFINED)
#define IL2CPP_STRUCT_Identity_DEFINED
struct Identity__Class;
struct Identity {
    struct Identity__Class* klass;
    MonitorData* monitor;
    struct Identity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Identity_FWDDECL)
#define IL2CPP_STRUCT_Identity_FWDDECL
#include <Modloader/app/structs/Identity__Class.h>
#endif
#undef IL2CPP_STRUCT_Identity_INITIALIZING
#if !defined(IL2CPP_STRUCT_Identity_DEFINED) && !defined(IL2CPP_STRUCT_Identity_FWDDECL)
#include <Modloader/app/structs/Identity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Identity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
