#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FullBodyBipedIK_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FullBodyBipedIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_FullBodyBipedIK_DEFINED)
#include <Modloader/app/structs/FullBodyBipedIK__Fields.h>
#if defined(IL2CPP_STRUCT_FullBodyBipedIK__Fields_DEFINED)
#define IL2CPP_STRUCT_FullBodyBipedIK_DEFINED
struct FullBodyBipedIK__Class;
struct FullBodyBipedIK {
    struct FullBodyBipedIK__Class* klass;
    MonitorData* monitor;
    struct FullBodyBipedIK__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FullBodyBipedIK_FWDDECL)
#define IL2CPP_STRUCT_FullBodyBipedIK_FWDDECL
#include <Modloader/app/structs/FullBodyBipedIK__Class.h>
#endif
#undef IL2CPP_STRUCT_FullBodyBipedIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_FullBodyBipedIK_DEFINED) && !defined(IL2CPP_STRUCT_FullBodyBipedIK_FWDDECL)
#include <Modloader/app/structs/FullBodyBipedIK.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FullBodyBipedIK.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
