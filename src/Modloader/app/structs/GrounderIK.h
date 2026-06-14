#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrounderIK_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrounderIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderIK_DEFINED)
#include <Modloader/app/structs/GrounderIK__Fields.h>
#if defined(IL2CPP_STRUCT_GrounderIK__Fields_DEFINED)
#define IL2CPP_STRUCT_GrounderIK_DEFINED
struct GrounderIK__Class;
struct GrounderIK {
    struct GrounderIK__Class* klass;
    MonitorData* monitor;
    struct GrounderIK__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrounderIK_FWDDECL)
#define IL2CPP_STRUCT_GrounderIK_FWDDECL
#include <Modloader/app/structs/GrounderIK__Class.h>
#endif
#undef IL2CPP_STRUCT_GrounderIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderIK_DEFINED) && !defined(IL2CPP_STRUCT_GrounderIK_FWDDECL)
#include <Modloader/app/structs/GrounderIK.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrounderIK.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
