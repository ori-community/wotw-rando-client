#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XProgression_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XProgression_INITIALIZING
#if !defined(IL2CPP_STRUCT_XProgression_DEFINED)
#include <Modloader/app/structs/XProgression__Fields.h>
#if defined(IL2CPP_STRUCT_XProgression__Fields_DEFINED)
#define IL2CPP_STRUCT_XProgression_DEFINED
struct XProgression__Class;
struct XProgression {
    struct XProgression__Class* klass;
    MonitorData* monitor;
    struct XProgression__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XProgression_FWDDECL)
#define IL2CPP_STRUCT_XProgression_FWDDECL
#include <Modloader/app/structs/XProgression__Class.h>
#endif
#undef IL2CPP_STRUCT_XProgression_INITIALIZING
#if !defined(IL2CPP_STRUCT_XProgression_DEFINED) && !defined(IL2CPP_STRUCT_XProgression_FWDDECL)
#include <Modloader/app/structs/XProgression.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XProgression.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
