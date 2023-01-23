#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Decimal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Decimal_INITIALIZING
#if !defined(IL2CPP_STRUCT_Decimal_DEFINED)
#define IL2CPP_STRUCT_Decimal_DEFINED
struct Decimal {
    int32_t flags;
    int32_t hi;
    int32_t lo;
    int32_t mid;
};
#endif
#if !defined(IL2CPP_STRUCT_Decimal_FWDDECL)
#define IL2CPP_STRUCT_Decimal_FWDDECL
#endif
#undef IL2CPP_STRUCT_Decimal_INITIALIZING
#if !defined(IL2CPP_STRUCT_Decimal_DEFINED) && !defined(IL2CPP_STRUCT_Decimal_FWDDECL)
#include <Modloader/app/structs/Decimal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Decimal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
