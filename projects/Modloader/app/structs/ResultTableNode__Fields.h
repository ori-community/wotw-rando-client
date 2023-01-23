#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResultTableNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResultTableNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResultTableNode__Fields_DEFINED)
#include <Modloader/app/structs/ResultTableNodeType__Enum.h>
#if defined(IL2CPP_STRUCT_ResultTableNodeType__Enum_DEFINED)
#define IL2CPP_STRUCT_ResultTableNode__Fields_DEFINED
struct String;
struct __declspec(align(8)) ResultTableNode__Fields {
    struct String* ResultItem;
    ResultTableNodeType__Enum ResultItemType;

    int32_t Weight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResultTableNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_ResultTableNode__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ResultTableNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResultTableNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ResultTableNode__Fields_FWDDECL)
#include <Modloader/app/structs/ResultTableNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResultTableNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
