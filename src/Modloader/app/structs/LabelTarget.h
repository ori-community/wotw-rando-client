#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LabelTarget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LabelTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelTarget_DEFINED)
#include <Modloader/app/structs/LabelTarget__Fields.h>
#if defined(IL2CPP_STRUCT_LabelTarget__Fields_DEFINED)
#define IL2CPP_STRUCT_LabelTarget_DEFINED
struct LabelTarget__Class;
struct LabelTarget {
    struct LabelTarget__Class* klass;
    MonitorData* monitor;
    struct LabelTarget__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LabelTarget_FWDDECL)
#define IL2CPP_STRUCT_LabelTarget_FWDDECL
#include <Modloader/app/structs/LabelTarget__Class.h>
#endif
#undef IL2CPP_STRUCT_LabelTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelTarget_DEFINED) && !defined(IL2CPP_STRUCT_LabelTarget_FWDDECL)
#include <Modloader/app/structs/LabelTarget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LabelTarget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
