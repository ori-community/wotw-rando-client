#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitWhile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitWhile_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitWhile_DEFINED)
#include <Modloader/app/structs/WaitWhile__Fields.h>
#if defined(IL2CPP_STRUCT_WaitWhile__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitWhile_DEFINED
struct WaitWhile__Class;
struct WaitWhile {
    struct WaitWhile__Class* klass;
    MonitorData* monitor;
    struct WaitWhile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitWhile_FWDDECL)
#define IL2CPP_STRUCT_WaitWhile_FWDDECL
#include <Modloader/app/structs/WaitWhile__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitWhile_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitWhile_DEFINED) && !defined(IL2CPP_STRUCT_WaitWhile_FWDDECL)
#include <Modloader/app/structs/WaitWhile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitWhile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
