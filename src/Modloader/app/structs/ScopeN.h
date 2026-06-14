#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScopeN_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScopeN_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScopeN_DEFINED)
#include <Modloader/app/structs/ScopeN__Fields.h>
#if defined(IL2CPP_STRUCT_ScopeN__Fields_DEFINED)
#define IL2CPP_STRUCT_ScopeN_DEFINED
struct ScopeN__Class;
struct ScopeN {
    struct ScopeN__Class* klass;
    MonitorData* monitor;
    struct ScopeN__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScopeN_FWDDECL)
#define IL2CPP_STRUCT_ScopeN_FWDDECL
#include <Modloader/app/structs/ScopeN__Class.h>
#endif
#undef IL2CPP_STRUCT_ScopeN_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScopeN_DEFINED) && !defined(IL2CPP_STRUCT_ScopeN_FWDDECL)
#include <Modloader/app/structs/ScopeN.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScopeN.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
