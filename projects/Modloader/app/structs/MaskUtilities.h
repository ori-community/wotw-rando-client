#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskUtilities_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskUtilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskUtilities_DEFINED)
#define IL2CPP_STRUCT_MaskUtilities_DEFINED
struct MaskUtilities__Class;
struct MaskUtilities {
    struct MaskUtilities__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MaskUtilities_FWDDECL)
#define IL2CPP_STRUCT_MaskUtilities_FWDDECL
#include <Modloader/app/structs/MaskUtilities__Class.h>
#endif
#undef IL2CPP_STRUCT_MaskUtilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskUtilities_DEFINED) && !defined(IL2CPP_STRUCT_MaskUtilities_FWDDECL)
#include <Modloader/app/structs/MaskUtilities.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskUtilities.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
