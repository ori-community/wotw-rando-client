#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeIdentifiers_Display__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeIdentifiers_Display__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeIdentifiers_Display__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeIdentifiers_Display__Fields_DEFINED
struct String;
struct __declspec(align(8)) TypeIdentifiers_Display__Fields {
    struct String* displayName;
    struct String* internal_name;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeIdentifiers_Display__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypeIdentifiers_Display__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TypeIdentifiers_Display__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeIdentifiers_Display__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypeIdentifiers_Display__Fields_FWDDECL)
#include <Modloader/app/structs/TypeIdentifiers_Display__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeIdentifiers_Display__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
