#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BipedIK_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BipedIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedIK_DEFINED)
#include <Modloader/app/structs/BipedIK__Fields.h>
#if defined(IL2CPP_STRUCT_BipedIK__Fields_DEFINED)
#define IL2CPP_STRUCT_BipedIK_DEFINED
struct BipedIK__Class;
struct BipedIK {
    struct BipedIK__Class* klass;
    MonitorData* monitor;
    struct BipedIK__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BipedIK_FWDDECL)
#define IL2CPP_STRUCT_BipedIK_FWDDECL
#include <Modloader/app/structs/BipedIK__Class.h>
#endif
#undef IL2CPP_STRUCT_BipedIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedIK_DEFINED) && !defined(IL2CPP_STRUCT_BipedIK_FWDDECL)
#include <Modloader/app/structs/BipedIK.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BipedIK.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
