#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRExtendedDisplay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRExtendedDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRExtendedDisplay_DEFINED)
#include <Modloader/app/structs/CVRExtendedDisplay__Fields.h>
#if defined(IL2CPP_STRUCT_CVRExtendedDisplay__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRExtendedDisplay_DEFINED
struct CVRExtendedDisplay__Class;
struct CVRExtendedDisplay {
    struct CVRExtendedDisplay__Class* klass;
    MonitorData* monitor;
    struct CVRExtendedDisplay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRExtendedDisplay_FWDDECL)
#define IL2CPP_STRUCT_CVRExtendedDisplay_FWDDECL
#include <Modloader/app/structs/CVRExtendedDisplay__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRExtendedDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRExtendedDisplay_DEFINED) && !defined(IL2CPP_STRUCT_CVRExtendedDisplay_FWDDECL)
#include <Modloader/app/structs/CVRExtendedDisplay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRExtendedDisplay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
