#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivatedClientTypeEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivatedClientTypeEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivatedClientTypeEntry__Fields_DEFINED)
#include <Modloader/app/structs/TypeEntry__Fields.h>
#if defined(IL2CPP_STRUCT_TypeEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivatedClientTypeEntry__Fields_DEFINED
struct String;
struct Type;
struct ActivatedClientTypeEntry__Fields {
    struct TypeEntry__Fields _;
    struct String* applicationUrl;
    struct Type* obj_type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivatedClientTypeEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActivatedClientTypeEntry__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ActivatedClientTypeEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivatedClientTypeEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActivatedClientTypeEntry__Fields_FWDDECL)
#include <Modloader/app/structs/ActivatedClientTypeEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivatedClientTypeEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
