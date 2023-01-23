#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsIEnumerableConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsIEnumerableConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsIEnumerableConverter_DEFINED)
#include <Modloader/app/structs/fsIEnumerableConverter__Fields.h>
#if defined(IL2CPP_STRUCT_fsIEnumerableConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_fsIEnumerableConverter_DEFINED
struct fsIEnumerableConverter__Class;
struct fsIEnumerableConverter {
    struct fsIEnumerableConverter__Class* klass;
    MonitorData* monitor;
    struct fsIEnumerableConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsIEnumerableConverter_FWDDECL)
#define IL2CPP_STRUCT_fsIEnumerableConverter_FWDDECL
#include <Modloader/app/structs/fsIEnumerableConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsIEnumerableConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsIEnumerableConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsIEnumerableConverter_FWDDECL)
#include <Modloader/app/structs/fsIEnumerableConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsIEnumerableConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
