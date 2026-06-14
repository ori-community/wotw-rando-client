#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FieldExpression__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FieldExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldExpression__Fields_DEFINED)
#include <Modloader/app/structs/MemberExpression__Fields.h>
#if defined(IL2CPP_STRUCT_MemberExpression__Fields_DEFINED)
#define IL2CPP_STRUCT_FieldExpression__Fields_DEFINED
struct FieldInfo_1;
struct FieldExpression__Fields {
    struct MemberExpression__Fields _;
    struct FieldInfo_1* _field;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FieldExpression__Fields_FWDDECL)
#define IL2CPP_STRUCT_FieldExpression__Fields_FWDDECL
#include <Modloader/app/structs/FieldInfo_1.h>
#endif
#undef IL2CPP_STRUCT_FieldExpression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldExpression__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FieldExpression__Fields_FWDDECL)
#include <Modloader/app/structs/FieldExpression__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FieldExpression__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
