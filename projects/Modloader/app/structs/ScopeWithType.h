#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScopeWithType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScopeWithType_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScopeWithType_DEFINED)
#include <Modloader/app/structs/ScopeWithType__Fields.h>
#if defined(IL2CPP_STRUCT_ScopeWithType__Fields_DEFINED)
#define IL2CPP_STRUCT_ScopeWithType_DEFINED
struct ScopeWithType__Class;
struct ScopeWithType {
    struct ScopeWithType__Class* klass;
    MonitorData* monitor;
    struct ScopeWithType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScopeWithType_FWDDECL)
#define IL2CPP_STRUCT_ScopeWithType_FWDDECL
#include <Modloader/app/structs/ScopeWithType__Class.h>
#endif
#undef IL2CPP_STRUCT_ScopeWithType_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScopeWithType_DEFINED) && !defined(IL2CPP_STRUCT_ScopeWithType_FWDDECL)
#include <Modloader/app/structs/ScopeWithType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScopeWithType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
