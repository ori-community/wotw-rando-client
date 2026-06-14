#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HideFlagsExtensions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HideFlagsExtensions_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideFlagsExtensions_DEFINED)
#define IL2CPP_STRUCT_HideFlagsExtensions_DEFINED
struct HideFlagsExtensions__Class;
struct HideFlagsExtensions {
    struct HideFlagsExtensions__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HideFlagsExtensions_FWDDECL)
#define IL2CPP_STRUCT_HideFlagsExtensions_FWDDECL
#include <Modloader/app/structs/HideFlagsExtensions__Class.h>
#endif
#undef IL2CPP_STRUCT_HideFlagsExtensions_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideFlagsExtensions_DEFINED) && !defined(IL2CPP_STRUCT_HideFlagsExtensions_FWDDECL)
#include <Modloader/app/structs/HideFlagsExtensions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HideFlagsExtensions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
