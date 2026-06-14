#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LimbIK_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LimbIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_LimbIK_DEFINED)
#include <Modloader/app/structs/LimbIK__Fields.h>
#if defined(IL2CPP_STRUCT_LimbIK__Fields_DEFINED)
#define IL2CPP_STRUCT_LimbIK_DEFINED
struct LimbIK__Class;
struct LimbIK {
    struct LimbIK__Class* klass;
    MonitorData* monitor;
    struct LimbIK__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LimbIK_FWDDECL)
#define IL2CPP_STRUCT_LimbIK_FWDDECL
#include <Modloader/app/structs/LimbIK__Class.h>
#endif
#undef IL2CPP_STRUCT_LimbIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_LimbIK_DEFINED) && !defined(IL2CPP_STRUCT_LimbIK_FWDDECL)
#include <Modloader/app/structs/LimbIK.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LimbIK.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
