#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Range_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Range_INITIALIZING
#if !defined(IL2CPP_STRUCT_Range_DEFINED)
#define IL2CPP_STRUCT_Range_DEFINED
struct Range {
    int32_t _min;
    int32_t _max;
    bool _isNotNull;
};
#endif
#if !defined(IL2CPP_STRUCT_Range_FWDDECL)
#define IL2CPP_STRUCT_Range_FWDDECL
#endif
#undef IL2CPP_STRUCT_Range_INITIALIZING
#if !defined(IL2CPP_STRUCT_Range_DEFINED) && !defined(IL2CPP_STRUCT_Range_FWDDECL)
#include <Modloader/app/structs/Range.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Range.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
