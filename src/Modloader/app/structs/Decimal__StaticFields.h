#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Decimal__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Decimal__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Decimal__StaticFields_DEFINED)
#include <Modloader/app/structs/Decimal.h>
#if defined(IL2CPP_STRUCT_Decimal_DEFINED)
#define IL2CPP_STRUCT_Decimal__StaticFields_DEFINED
struct UInt32__Array;
struct Decimal__StaticFields {
    struct UInt32__Array* Powers10;
    struct Decimal Zero;
    struct Decimal One;
    struct Decimal MinusOne;
    struct Decimal MaxValue;
    struct Decimal MinValue;
    struct Decimal NearNegativeZero;
    struct Decimal NearPositiveZero;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Decimal__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Decimal__StaticFields_FWDDECL
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_Decimal__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Decimal__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Decimal__StaticFields_FWDDECL)
#include <Modloader/app/structs/Decimal__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Decimal__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
