#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsMetaProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsMetaProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsMetaProperty_DEFINED)
#include <Modloader/app/structs/fsMetaProperty__Fields.h>
#if defined(IL2CPP_STRUCT_fsMetaProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_fsMetaProperty_DEFINED
struct fsMetaProperty__Class;
struct fsMetaProperty {
    struct fsMetaProperty__Class* klass;
    MonitorData* monitor;
    struct fsMetaProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsMetaProperty_FWDDECL)
#define IL2CPP_STRUCT_fsMetaProperty_FWDDECL
#include <Modloader/app/structs/fsMetaProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_fsMetaProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsMetaProperty_DEFINED) && !defined(IL2CPP_STRUCT_fsMetaProperty_FWDDECL)
#include <Modloader/app/structs/fsMetaProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsMetaProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
