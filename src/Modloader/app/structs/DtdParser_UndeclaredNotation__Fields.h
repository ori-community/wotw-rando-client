#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DtdParser_UndeclaredNotation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DtdParser_UndeclaredNotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DtdParser_UndeclaredNotation__Fields_DEFINED)
#define IL2CPP_STRUCT_DtdParser_UndeclaredNotation__Fields_DEFINED
struct String;
struct DtdParser_UndeclaredNotation;
struct __declspec(align(8)) DtdParser_UndeclaredNotation__Fields {
    struct String* name;
    int32_t lineNo;
    int32_t linePos;
    struct DtdParser_UndeclaredNotation* next;
};
#endif
#if !defined(IL2CPP_STRUCT_DtdParser_UndeclaredNotation__Fields_FWDDECL)
#define IL2CPP_STRUCT_DtdParser_UndeclaredNotation__Fields_FWDDECL
#include <Modloader/app/structs/DtdParser_UndeclaredNotation.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DtdParser_UndeclaredNotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DtdParser_UndeclaredNotation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DtdParser_UndeclaredNotation__Fields_FWDDECL)
#include <Modloader/app/structs/DtdParser_UndeclaredNotation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DtdParser_UndeclaredNotation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
