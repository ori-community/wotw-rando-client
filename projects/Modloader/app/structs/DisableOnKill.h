#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisableOnKill_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisableOnKill_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisableOnKill_DEFINED)
#include <Modloader/app/structs/DisableOnKill__Fields.h>
#if defined(IL2CPP_STRUCT_DisableOnKill__Fields_DEFINED)
#define IL2CPP_STRUCT_DisableOnKill_DEFINED
struct DisableOnKill__Class;
struct DisableOnKill {
    struct DisableOnKill__Class* klass;
    MonitorData* monitor;
    struct DisableOnKill__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisableOnKill_FWDDECL)
#define IL2CPP_STRUCT_DisableOnKill_FWDDECL
#include <Modloader/app/structs/DisableOnKill__Class.h>
#endif
#undef IL2CPP_STRUCT_DisableOnKill_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisableOnKill_DEFINED) && !defined(IL2CPP_STRUCT_DisableOnKill_FWDDECL)
#include <Modloader/app/structs/DisableOnKill.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisableOnKill.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
