#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LingerOption_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LingerOption_INITIALIZING
#if !defined(IL2CPP_STRUCT_LingerOption_DEFINED)
#include <Modloader/app/structs/LingerOption__Fields.h>
#if defined(IL2CPP_STRUCT_LingerOption__Fields_DEFINED)
#define IL2CPP_STRUCT_LingerOption_DEFINED
struct LingerOption__Class;
struct LingerOption {
    struct LingerOption__Class* klass;
    MonitorData* monitor;
    struct LingerOption__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LingerOption_FWDDECL)
#define IL2CPP_STRUCT_LingerOption_FWDDECL
#include <Modloader/app/structs/LingerOption__Class.h>
#endif
#undef IL2CPP_STRUCT_LingerOption_INITIALIZING
#if !defined(IL2CPP_STRUCT_LingerOption_DEFINED) && !defined(IL2CPP_STRUCT_LingerOption_FWDDECL)
#include <Modloader/app/structs/LingerOption.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LingerOption.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
