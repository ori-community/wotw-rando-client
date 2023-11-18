#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnEnterBash_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnEnterBash_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnEnterBash_DEFINED)
#define IL2CPP_STRUCT_OnEnterBash_DEFINED
struct OnEnterBash__Class;
struct OnEnterBash {
    struct OnEnterBash__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OnEnterBash_FWDDECL)
#define IL2CPP_STRUCT_OnEnterBash_FWDDECL
#include <Modloader/app/structs/OnEnterBash__Class.h>
#endif
#undef IL2CPP_STRUCT_OnEnterBash_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnEnterBash_DEFINED) && !defined(IL2CPP_STRUCT_OnEnterBash_FWDDECL)
#include <Modloader/app/structs/OnEnterBash.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnEnterBash.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
