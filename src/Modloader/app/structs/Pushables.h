#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Pushables_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Pushables_INITIALIZING
#if !defined(IL2CPP_STRUCT_Pushables_DEFINED)
#define IL2CPP_STRUCT_Pushables_DEFINED
struct Pushables__Class;
struct Pushables {
    struct Pushables__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Pushables_FWDDECL)
#define IL2CPP_STRUCT_Pushables_FWDDECL
#include <Modloader/app/structs/Pushables__Class.h>
#endif
#undef IL2CPP_STRUCT_Pushables_INITIALIZING
#if !defined(IL2CPP_STRUCT_Pushables_DEFINED) && !defined(IL2CPP_STRUCT_Pushables_FWDDECL)
#include <Modloader/app/structs/Pushables.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Pushables.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
