#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetMatch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetMatch_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetMatch_DEFINED)
#include <Modloader/app/structs/TargetMatch__Fields.h>
#if defined(IL2CPP_STRUCT_TargetMatch__Fields_DEFINED)
#define IL2CPP_STRUCT_TargetMatch_DEFINED
struct TargetMatch__Class;
struct TargetMatch {
    struct TargetMatch__Class* klass;
    MonitorData* monitor;
    struct TargetMatch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TargetMatch_FWDDECL)
#define IL2CPP_STRUCT_TargetMatch_FWDDECL
#include <Modloader/app/structs/TargetMatch__Class.h>
#endif
#undef IL2CPP_STRUCT_TargetMatch_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetMatch_DEFINED) && !defined(IL2CPP_STRUCT_TargetMatch_FWDDECL)
#include <Modloader/app/structs/TargetMatch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetMatch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
