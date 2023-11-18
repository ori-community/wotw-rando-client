#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MathUtilities__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MathUtilities__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MathUtilities__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MathUtilities__StaticFields_DEFINED
struct Single__Array;
struct MathUtilities__StaticFields {
    int32_t m_sineLookupSize;
    struct Single__Array* m_sineLookupTable;
};
#endif
#if !defined(IL2CPP_STRUCT_MathUtilities__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MathUtilities__StaticFields_FWDDECL
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_MathUtilities__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MathUtilities__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MathUtilities__StaticFields_FWDDECL)
#include <Modloader/app/structs/MathUtilities__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MathUtilities__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
