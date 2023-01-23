#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoubleUlong_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoubleUlong_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleUlong_DEFINED)
#define IL2CPP_STRUCT_DoubleUlong_DEFINED
struct DoubleUlong {
    double dbl;
    uint64_t uu;
};
#endif
#if !defined(IL2CPP_STRUCT_DoubleUlong_FWDDECL)
#define IL2CPP_STRUCT_DoubleUlong_FWDDECL
#endif
#undef IL2CPP_STRUCT_DoubleUlong_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleUlong_DEFINED) && !defined(IL2CPP_STRUCT_DoubleUlong_FWDDECL)
#include <Modloader/app/structs/DoubleUlong.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoubleUlong.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
