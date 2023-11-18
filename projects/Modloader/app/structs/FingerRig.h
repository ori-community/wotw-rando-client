#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FingerRig_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FingerRig_INITIALIZING
#if !defined(IL2CPP_STRUCT_FingerRig_DEFINED)
#include <Modloader/app/structs/FingerRig__Fields.h>
#if defined(IL2CPP_STRUCT_FingerRig__Fields_DEFINED)
#define IL2CPP_STRUCT_FingerRig_DEFINED
struct FingerRig__Class;
struct FingerRig {
    struct FingerRig__Class* klass;
    MonitorData* monitor;
    struct FingerRig__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FingerRig_FWDDECL)
#define IL2CPP_STRUCT_FingerRig_FWDDECL
#include <Modloader/app/structs/FingerRig__Class.h>
#endif
#undef IL2CPP_STRUCT_FingerRig_INITIALIZING
#if !defined(IL2CPP_STRUCT_FingerRig_DEFINED) && !defined(IL2CPP_STRUCT_FingerRig_FWDDECL)
#include <Modloader/app/structs/FingerRig.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FingerRig.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
