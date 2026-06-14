#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsReflectedConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsReflectedConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsReflectedConverter_DEFINED)
#include <Modloader/app/structs/fsReflectedConverter__Fields.h>
#if defined(IL2CPP_STRUCT_fsReflectedConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_fsReflectedConverter_DEFINED
struct fsReflectedConverter__Class;
struct fsReflectedConverter {
    struct fsReflectedConverter__Class* klass;
    MonitorData* monitor;
    struct fsReflectedConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsReflectedConverter_FWDDECL)
#define IL2CPP_STRUCT_fsReflectedConverter_FWDDECL
#include <Modloader/app/structs/fsReflectedConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsReflectedConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsReflectedConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsReflectedConverter_FWDDECL)
#include <Modloader/app/structs/fsReflectedConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsReflectedConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
