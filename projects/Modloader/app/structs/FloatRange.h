#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatRange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatRange_DEFINED)
#define IL2CPP_STRUCT_FloatRange_DEFINED
struct FloatRange {
    float min;
    float max;
};
#endif
#if !defined(IL2CPP_STRUCT_FloatRange_FWDDECL)
#define IL2CPP_STRUCT_FloatRange_FWDDECL
#endif
#undef IL2CPP_STRUCT_FloatRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatRange_DEFINED) && !defined(IL2CPP_STRUCT_FloatRange_FWDDECL)
#include <Modloader/app/structs/FloatRange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatRange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
