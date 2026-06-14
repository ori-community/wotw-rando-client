#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfiguredTaskAwaitable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfiguredTaskAwaitable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_DEFINED)
#include <Modloader/app/structs/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h>
#if defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_DEFINED)
#define IL2CPP_STRUCT_ConfiguredTaskAwaitable_DEFINED
struct ConfiguredTaskAwaitable {
    struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter m_configuredTaskAwaiter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_FWDDECL)
#define IL2CPP_STRUCT_ConfiguredTaskAwaitable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ConfiguredTaskAwaitable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_DEFINED) && !defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_FWDDECL)
#include <Modloader/app/structs/ConfiguredTaskAwaitable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfiguredTaskAwaitable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
