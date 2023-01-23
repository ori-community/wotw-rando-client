#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntRange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntRange_DEFINED)
#define IL2CPP_STRUCT_IntRange_DEFINED
struct IntRange {
    int32_t min;
    int32_t max;
};
#endif
#if !defined(IL2CPP_STRUCT_IntRange_FWDDECL)
#define IL2CPP_STRUCT_IntRange_FWDDECL
#endif
#undef IL2CPP_STRUCT_IntRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntRange_DEFINED) && !defined(IL2CPP_STRUCT_IntRange_FWDDECL)
#include <Modloader/app/structs/IntRange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntRange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
