#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoIncrementInt64__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoIncrementInt64__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoIncrementInt64__Fields_DEFINED)
#include <Modloader/app/structs/AutoIncrementValue__Fields.h>
#if defined(IL2CPP_STRUCT_AutoIncrementValue__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoIncrementInt64__Fields_DEFINED
struct AutoIncrementInt64__Fields {
    struct AutoIncrementValue__Fields _;
    int64_t _current;
    int64_t _seed;
    int64_t _step;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoIncrementInt64__Fields_FWDDECL)
#define IL2CPP_STRUCT_AutoIncrementInt64__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AutoIncrementInt64__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoIncrementInt64__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AutoIncrementInt64__Fields_FWDDECL)
#include <Modloader/app/structs/AutoIncrementInt64__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoIncrementInt64__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
