#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrigger_DEFINED)
#define IL2CPP_STRUCT_ITrigger_DEFINED
struct ITrigger__Class;
struct ITrigger {
    struct ITrigger__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITrigger_FWDDECL)
#define IL2CPP_STRUCT_ITrigger_FWDDECL
#include <Modloader/app/structs/ITrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_ITrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITrigger_DEFINED) && !defined(IL2CPP_STRUCT_ITrigger_FWDDECL)
#include <Modloader/app/structs/ITrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
