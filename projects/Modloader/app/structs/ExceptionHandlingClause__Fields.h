#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionHandlingClause__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionHandlingClause__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionHandlingClause__Fields_DEFINED)
#include <Modloader/app/structs/ExceptionHandlingClauseOptions__Enum.h>
#if defined(IL2CPP_STRUCT_ExceptionHandlingClauseOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_ExceptionHandlingClause__Fields_DEFINED
struct Type;
struct __declspec(align(8)) ExceptionHandlingClause__Fields {
    struct Type* catch_type;
    int32_t filter_offset;
    ExceptionHandlingClauseOptions__Enum flags;

    int32_t try_offset;
    int32_t try_length;
    int32_t handler_offset;
    int32_t handler_length;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionHandlingClause__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExceptionHandlingClause__Fields_FWDDECL
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ExceptionHandlingClause__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionHandlingClause__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionHandlingClause__Fields_FWDDECL)
#include <Modloader/app/structs/ExceptionHandlingClause__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionHandlingClause__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
