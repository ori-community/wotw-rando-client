#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsMetaType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsMetaType_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsMetaType_DEFINED)
#include <Modloader/app/structs/fsMetaType__Fields.h>
#if defined(IL2CPP_STRUCT_fsMetaType__Fields_DEFINED)
#define IL2CPP_STRUCT_fsMetaType_DEFINED
struct fsMetaType__Class;
struct fsMetaType {
    struct fsMetaType__Class* klass;
    MonitorData* monitor;
    struct fsMetaType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsMetaType_FWDDECL)
#define IL2CPP_STRUCT_fsMetaType_FWDDECL
#include <Modloader/app/structs/fsMetaType__Class.h>
#endif
#undef IL2CPP_STRUCT_fsMetaType_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsMetaType_DEFINED) && !defined(IL2CPP_STRUCT_fsMetaType_FWDDECL)
#include <Modloader/app/structs/fsMetaType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsMetaType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
