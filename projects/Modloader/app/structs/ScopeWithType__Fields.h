#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScopeWithType__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScopeWithType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScopeWithType__Fields_DEFINED)
#include <Modloader/app/structs/ScopeN__Fields.h>
#if defined(IL2CPP_STRUCT_ScopeN__Fields_DEFINED)
#define IL2CPP_STRUCT_ScopeWithType__Fields_DEFINED
struct Type;
struct ScopeWithType__Fields {
    struct ScopeN__Fields _;
    struct Type* _Type_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScopeWithType__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScopeWithType__Fields_FWDDECL
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ScopeWithType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScopeWithType__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScopeWithType__Fields_FWDDECL)
#include <Modloader/app/structs/ScopeWithType__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScopeWithType__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
