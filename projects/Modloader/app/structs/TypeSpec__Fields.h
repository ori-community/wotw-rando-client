#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeSpec__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeSpec__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeSpec__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeSpec__Fields_DEFINED
struct TypeIdentifier;
struct String;
struct List_1_System_TypeIdentifier_;
struct List_1_System_TypeSpec_;
struct List_1_System_ModifierSpec_;
struct __declspec(align(8)) TypeSpec__Fields {
    struct TypeIdentifier* name;
    struct String* assembly_name;
    struct List_1_System_TypeIdentifier_* nested;
    struct List_1_System_TypeSpec_* generic_params;
    struct List_1_System_ModifierSpec_* modifier_spec;
    bool is_byref;
    struct String* display_fullname;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeSpec__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypeSpec__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_ModifierSpec_.h>
#include <Modloader/app/structs/List_1_System_TypeIdentifier_.h>
#include <Modloader/app/structs/List_1_System_TypeSpec_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeIdentifier.h>
#endif
#undef IL2CPP_STRUCT_TypeSpec__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeSpec__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypeSpec__Fields_FWDDECL)
#include <Modloader/app/structs/TypeSpec__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeSpec__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
