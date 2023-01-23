#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X520_UserId_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X520_UserId_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_UserId_DEFINED)
#include <Modloader/app/structs/X520_UserId__Fields.h>
#if defined(IL2CPP_STRUCT_X520_UserId__Fields_DEFINED)
#define IL2CPP_STRUCT_X520_UserId_DEFINED
struct X520_UserId__Class;
struct X520_UserId {
    struct X520_UserId__Class* klass;
    MonitorData* monitor;
    struct X520_UserId__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X520_UserId_FWDDECL)
#define IL2CPP_STRUCT_X520_UserId_FWDDECL
#include <Modloader/app/structs/X520_UserId__Class.h>
#endif
#undef IL2CPP_STRUCT_X520_UserId_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_UserId_DEFINED) && !defined(IL2CPP_STRUCT_X520_UserId_FWDDECL)
#include <Modloader/app/structs/X520_UserId.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X520_UserId.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
