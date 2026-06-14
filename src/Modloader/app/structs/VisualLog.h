#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VisualLog_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VisualLog_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisualLog_DEFINED)
#include <Modloader/app/structs/VisualLog__Fields.h>
#if defined(IL2CPP_STRUCT_VisualLog__Fields_DEFINED)
#define IL2CPP_STRUCT_VisualLog_DEFINED
struct VisualLog__Class;
struct VisualLog {
    struct VisualLog__Class* klass;
    MonitorData* monitor;
    struct VisualLog__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VisualLog_FWDDECL)
#define IL2CPP_STRUCT_VisualLog_FWDDECL
#include <Modloader/app/structs/VisualLog__Class.h>
#endif
#undef IL2CPP_STRUCT_VisualLog_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisualLog_DEFINED) && !defined(IL2CPP_STRUCT_VisualLog_FWDDECL)
#include <Modloader/app/structs/VisualLog.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VisualLog.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
