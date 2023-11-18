#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlStats_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlStats_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlStats__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlStats__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlStats_DEFINED
struct PetrifiedOwlStats__Class;
struct PetrifiedOwlStats {
    struct PetrifiedOwlStats__Class* klass;
    MonitorData* monitor;
    struct PetrifiedOwlStats__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlStats_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlStats_FWDDECL
#include <Modloader/app/structs/PetrifiedOwlStats__Class.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlStats_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlStats_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
