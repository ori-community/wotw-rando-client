#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X520_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X520_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_DEFINED)
#define IL2CPP_STRUCT_X520_DEFINED
struct X520__Class;
struct X520 {
    struct X520__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_X520_FWDDECL)
#define IL2CPP_STRUCT_X520_FWDDECL
#include <Modloader/app/structs/X520__Class.h>
#endif
#undef IL2CPP_STRUCT_X520_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_DEFINED) && !defined(IL2CPP_STRUCT_X520_FWDDECL)
#include <Modloader/app/structs/X520.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X520.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
