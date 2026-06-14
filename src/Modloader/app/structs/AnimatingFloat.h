#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatingFloat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatingFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatingFloat_DEFINED)
#include <Modloader/app/structs/AnimatingFloat__Fields.h>
#if defined(IL2CPP_STRUCT_AnimatingFloat__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimatingFloat_DEFINED
struct AnimatingFloat__Class;
struct AnimatingFloat {
    struct AnimatingFloat__Class* klass;
    MonitorData* monitor;
    struct AnimatingFloat__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatingFloat_FWDDECL)
#define IL2CPP_STRUCT_AnimatingFloat_FWDDECL
#include <Modloader/app/structs/AnimatingFloat__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimatingFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatingFloat_DEFINED) && !defined(IL2CPP_STRUCT_AnimatingFloat_FWDDECL)
#include <Modloader/app/structs/AnimatingFloat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatingFloat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
