#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Scope1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Scope1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scope1__Fields_DEFINED)
#include <Modloader/app/structs/ScopeExpression__Fields.h>
#if defined(IL2CPP_STRUCT_ScopeExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_Scope1__Fields_DEFINED
struct Object;
struct Scope1__Fields {
    struct ScopeExpression__Fields _;
    struct Object* _body;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Scope1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Scope1__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Scope1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scope1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Scope1__Fields_FWDDECL)
#include <Modloader/app/structs/Scope1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Scope1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
