#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EvaluateException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EvaluateException_INITIALIZING
#if !defined(IL2CPP_STRUCT_EvaluateException_DEFINED)
#include <Modloader/app/structs/EvaluateException__Fields.h>
#if defined(IL2CPP_STRUCT_EvaluateException__Fields_DEFINED)
#define IL2CPP_STRUCT_EvaluateException_DEFINED
struct EvaluateException__Class;
struct EvaluateException {
    struct EvaluateException__Class* klass;
    MonitorData* monitor;
    struct EvaluateException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EvaluateException_FWDDECL)
#define IL2CPP_STRUCT_EvaluateException_FWDDECL
#include <Modloader/app/structs/EvaluateException__Class.h>
#endif
#undef IL2CPP_STRUCT_EvaluateException_INITIALIZING
#if !defined(IL2CPP_STRUCT_EvaluateException_DEFINED) && !defined(IL2CPP_STRUCT_EvaluateException_FWDDECL)
#include <Modloader/app/structs/EvaluateException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EvaluateException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
