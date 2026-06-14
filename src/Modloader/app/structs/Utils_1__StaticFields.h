#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Utils_1__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Utils_1__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utils_1__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Utils_1__StaticFields_DEFINED
struct Object;
struct ConstantExpression;
struct DefaultExpression;
struct Utils_1__StaticFields {
    struct Object* BoxedFalse;
    struct Object* BoxedTrue;
    struct Object* BoxedIntM1;
    struct Object* BoxedInt0;
    struct Object* BoxedInt1;
    struct Object* BoxedInt2;
    struct Object* BoxedInt3;
    struct Object* BoxedDefaultSByte;
    struct Object* BoxedDefaultChar;
    struct Object* BoxedDefaultInt16;
    struct Object* BoxedDefaultInt64;
    struct Object* BoxedDefaultByte;
    struct Object* BoxedDefaultUInt16;
    struct Object* BoxedDefaultUInt32;
    struct Object* BoxedDefaultUInt64;
    struct Object* BoxedDefaultSingle;
    struct Object* BoxedDefaultDouble;
    struct Object* BoxedDefaultDecimal;
    struct Object* BoxedDefaultDateTime;
    struct ConstantExpression* s_true;
    struct ConstantExpression* s_false;
    struct ConstantExpression* s_m1;
    struct ConstantExpression* s_0;
    struct ConstantExpression* s_1;
    struct ConstantExpression* s_2;
    struct ConstantExpression* s_3;
    struct DefaultExpression* Empty;
    struct ConstantExpression* Null;
};
#endif
#if !defined(IL2CPP_STRUCT_Utils_1__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Utils_1__StaticFields_FWDDECL
#include <Modloader/app/structs/ConstantExpression.h>
#include <Modloader/app/structs/DefaultExpression.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Utils_1__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utils_1__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Utils_1__StaticFields_FWDDECL)
#include <Modloader/app/structs/Utils_1__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Utils_1__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
