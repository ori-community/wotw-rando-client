#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitUntil_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitUntil_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitUntil_DEFINED)
#include <Modloader/app/structs/WaitUntil__Fields.h>
#if defined(IL2CPP_STRUCT_WaitUntil__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitUntil_DEFINED
struct WaitUntil__Class;
struct WaitUntil {
    struct WaitUntil__Class* klass;
    MonitorData* monitor;
    struct WaitUntil__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitUntil_FWDDECL)
#define IL2CPP_STRUCT_WaitUntil_FWDDECL
#include <Modloader/app/structs/WaitUntil__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitUntil_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitUntil_DEFINED) && !defined(IL2CPP_STRUCT_WaitUntil_FWDDECL)
#include <Modloader/app/structs/WaitUntil.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitUntil.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
