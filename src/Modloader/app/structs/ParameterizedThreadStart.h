#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterizedThreadStart_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterizedThreadStart_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterizedThreadStart_DEFINED)
#include <Modloader/app/structs/ParameterizedThreadStart__Fields.h>
#if defined(IL2CPP_STRUCT_ParameterizedThreadStart__Fields_DEFINED)
#define IL2CPP_STRUCT_ParameterizedThreadStart_DEFINED
struct ParameterizedThreadStart__Class;
struct ParameterizedThreadStart {
    struct ParameterizedThreadStart__Class* klass;
    MonitorData* monitor;
    struct ParameterizedThreadStart__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParameterizedThreadStart_FWDDECL)
#define IL2CPP_STRUCT_ParameterizedThreadStart_FWDDECL
#include <Modloader/app/structs/ParameterizedThreadStart__Class.h>
#endif
#undef IL2CPP_STRUCT_ParameterizedThreadStart_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterizedThreadStart_DEFINED) && !defined(IL2CPP_STRUCT_ParameterizedThreadStart_FWDDECL)
#include <Modloader/app/structs/ParameterizedThreadStart.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterizedThreadStart.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
