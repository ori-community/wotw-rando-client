#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MathUtilities_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MathUtilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_MathUtilities_DEFINED)
#define IL2CPP_STRUCT_MathUtilities_DEFINED
struct MathUtilities__Class;
struct MathUtilities {
    struct MathUtilities__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MathUtilities_FWDDECL)
#define IL2CPP_STRUCT_MathUtilities_FWDDECL
#include <Modloader/app/structs/MathUtilities__Class.h>
#endif
#undef IL2CPP_STRUCT_MathUtilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_MathUtilities_DEFINED) && !defined(IL2CPP_STRUCT_MathUtilities_FWDDECL)
#include <Modloader/app/structs/MathUtilities.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MathUtilities.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
