#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Rail_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Rail_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rail_DEFINED)
#include <Modloader/app/structs/Rail__Fields.h>
#if defined(IL2CPP_STRUCT_Rail__Fields_DEFINED)
#define IL2CPP_STRUCT_Rail_DEFINED
struct Rail__Class;
struct Rail {
    struct Rail__Class* klass;
    MonitorData* monitor;
    struct Rail__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Rail_FWDDECL)
#define IL2CPP_STRUCT_Rail_FWDDECL
#include <Modloader/app/structs/Rail__Class.h>
#endif
#undef IL2CPP_STRUCT_Rail_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rail_DEFINED) && !defined(IL2CPP_STRUCT_Rail_FWDDECL)
#include <Modloader/app/structs/Rail.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Rail.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
