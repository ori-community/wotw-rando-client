#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SCurveContrast_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SCurveContrast_INITIALIZING
#if !defined(IL2CPP_STRUCT_SCurveContrast_DEFINED)
#include <Modloader/app/structs/SCurveContrast__Fields.h>
#if defined(IL2CPP_STRUCT_SCurveContrast__Fields_DEFINED)
#define IL2CPP_STRUCT_SCurveContrast_DEFINED
struct SCurveContrast__Class;
struct SCurveContrast {
    struct SCurveContrast__Class* klass;
    MonitorData* monitor;
    struct SCurveContrast__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SCurveContrast_FWDDECL)
#define IL2CPP_STRUCT_SCurveContrast_FWDDECL
#include <Modloader/app/structs/SCurveContrast__Class.h>
#endif
#undef IL2CPP_STRUCT_SCurveContrast_INITIALIZING
#if !defined(IL2CPP_STRUCT_SCurveContrast_DEFINED) && !defined(IL2CPP_STRUCT_SCurveContrast_FWDDECL)
#include <Modloader/app/structs/SCurveContrast.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SCurveContrast.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
