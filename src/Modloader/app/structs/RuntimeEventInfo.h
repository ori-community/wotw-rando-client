#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeEventInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeEventInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeEventInfo_DEFINED)
#include <Modloader/app/structs/RuntimeEventInfo__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeEventInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeEventInfo_DEFINED
struct RuntimeEventInfo__Class;
struct RuntimeEventInfo {
    struct RuntimeEventInfo__Class* klass;
    MonitorData* monitor;
    struct RuntimeEventInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeEventInfo_FWDDECL)
#define IL2CPP_STRUCT_RuntimeEventInfo_FWDDECL
#include <Modloader/app/structs/RuntimeEventInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeEventInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeEventInfo_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeEventInfo_FWDDECL)
#include <Modloader/app/structs/RuntimeEventInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeEventInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
