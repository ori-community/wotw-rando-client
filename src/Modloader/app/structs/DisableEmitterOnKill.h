#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisableEmitterOnKill_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisableEmitterOnKill_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisableEmitterOnKill_DEFINED)
#include <Modloader/app/structs/DisableEmitterOnKill__Fields.h>
#if defined(IL2CPP_STRUCT_DisableEmitterOnKill__Fields_DEFINED)
#define IL2CPP_STRUCT_DisableEmitterOnKill_DEFINED
struct DisableEmitterOnKill__Class;
struct DisableEmitterOnKill {
    struct DisableEmitterOnKill__Class* klass;
    MonitorData* monitor;
    struct DisableEmitterOnKill__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisableEmitterOnKill_FWDDECL)
#define IL2CPP_STRUCT_DisableEmitterOnKill_FWDDECL
#include <Modloader/app/structs/DisableEmitterOnKill__Class.h>
#endif
#undef IL2CPP_STRUCT_DisableEmitterOnKill_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisableEmitterOnKill_DEFINED) && !defined(IL2CPP_STRUCT_DisableEmitterOnKill_FWDDECL)
#include <Modloader/app/structs/DisableEmitterOnKill.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisableEmitterOnKill.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
