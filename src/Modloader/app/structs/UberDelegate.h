#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberDelegate_DEFINED)
#include <Modloader/app/structs/UberDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_UberDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_UberDelegate_DEFINED
struct UberDelegate__Class;
struct UberDelegate {
    struct UberDelegate__Class* klass;
    MonitorData* monitor;
    struct UberDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberDelegate_FWDDECL)
#define IL2CPP_STRUCT_UberDelegate_FWDDECL
#include <Modloader/app/structs/UberDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_UberDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberDelegate_DEFINED) && !defined(IL2CPP_STRUCT_UberDelegate_FWDDECL)
#include <Modloader/app/structs/UberDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
