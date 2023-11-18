#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlGuid__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlGuid__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlGuid__Boxed_DEFINED)
#include <Modloader/app/structs/SqlGuid.h>
#if defined(IL2CPP_STRUCT_SqlGuid_DEFINED)
#define IL2CPP_STRUCT_SqlGuid__Boxed_DEFINED
struct SqlGuid__Class;
struct SqlGuid__Boxed {
    struct SqlGuid__Class* klass;
    MonitorData* monitor;
    struct SqlGuid fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlGuid__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SqlGuid__Boxed_FWDDECL
#include <Modloader/app/structs/SqlGuid__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlGuid__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlGuid__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SqlGuid__Boxed_FWDDECL)
#include <Modloader/app/structs/SqlGuid__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlGuid__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
