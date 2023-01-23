#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LookAtIK_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LookAtIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookAtIK_DEFINED)
#include <Modloader/app/structs/LookAtIK__Fields.h>
#if defined(IL2CPP_STRUCT_LookAtIK__Fields_DEFINED)
#define IL2CPP_STRUCT_LookAtIK_DEFINED
struct LookAtIK__Class;
struct LookAtIK {
    struct LookAtIK__Class* klass;
    MonitorData* monitor;
    struct LookAtIK__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LookAtIK_FWDDECL)
#define IL2CPP_STRUCT_LookAtIK_FWDDECL
#include <Modloader/app/structs/LookAtIK__Class.h>
#endif
#undef IL2CPP_STRUCT_LookAtIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookAtIK_DEFINED) && !defined(IL2CPP_STRUCT_LookAtIK_FWDDECL)
#include <Modloader/app/structs/LookAtIK.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LookAtIK.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
