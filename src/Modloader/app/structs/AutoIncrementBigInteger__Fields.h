#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoIncrementBigInteger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoIncrementBigInteger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoIncrementBigInteger__Fields_DEFINED)
#include <Modloader/app/structs/AutoIncrementValue__Fields.h>
#include <Modloader/app/structs/BigInteger_2.h>
#if defined(IL2CPP_STRUCT_AutoIncrementValue__Fields_DEFINED) && defined(IL2CPP_STRUCT_BigInteger_2_DEFINED)
#define IL2CPP_STRUCT_AutoIncrementBigInteger__Fields_DEFINED
struct AutoIncrementBigInteger__Fields {
    struct AutoIncrementValue__Fields _;
    struct BigInteger_2 _current;
    int64_t _seed;
    struct BigInteger_2 _step;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoIncrementBigInteger__Fields_FWDDECL)
#define IL2CPP_STRUCT_AutoIncrementBigInteger__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AutoIncrementBigInteger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoIncrementBigInteger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AutoIncrementBigInteger__Fields_FWDDECL)
#include <Modloader/app/structs/AutoIncrementBigInteger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoIncrementBigInteger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
