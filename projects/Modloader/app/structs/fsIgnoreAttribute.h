#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsIgnoreAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsIgnoreAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsIgnoreAttribute_DEFINED)
#define IL2CPP_STRUCT_fsIgnoreAttribute_DEFINED
struct fsIgnoreAttribute__Class;
struct fsIgnoreAttribute {
    struct fsIgnoreAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_fsIgnoreAttribute_FWDDECL)
#define IL2CPP_STRUCT_fsIgnoreAttribute_FWDDECL
#include <Modloader/app/structs/fsIgnoreAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_fsIgnoreAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsIgnoreAttribute_DEFINED) && !defined(IL2CPP_STRUCT_fsIgnoreAttribute_FWDDECL)
#include <Modloader/app/structs/fsIgnoreAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsIgnoreAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
