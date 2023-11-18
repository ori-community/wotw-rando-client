#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityLogWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityLogWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityLogWriter_DEFINED)
#include <Modloader/app/structs/UnityLogWriter__Fields.h>
#if defined(IL2CPP_STRUCT_UnityLogWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityLogWriter_DEFINED
struct UnityLogWriter__Class;
struct UnityLogWriter {
    struct UnityLogWriter__Class* klass;
    MonitorData* monitor;
    struct UnityLogWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityLogWriter_FWDDECL)
#define IL2CPP_STRUCT_UnityLogWriter_FWDDECL
#include <Modloader/app/structs/UnityLogWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityLogWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityLogWriter_DEFINED) && !defined(IL2CPP_STRUCT_UnityLogWriter_FWDDECL)
#include <Modloader/app/structs/UnityLogWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityLogWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
