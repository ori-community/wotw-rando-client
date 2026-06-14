#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsPropertyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsPropertyAttribute_DEFINED)
#include <Modloader/app/structs/fsPropertyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_fsPropertyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_fsPropertyAttribute_DEFINED
struct fsPropertyAttribute__Class;
struct fsPropertyAttribute {
    struct fsPropertyAttribute__Class* klass;
    MonitorData* monitor;
    struct fsPropertyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsPropertyAttribute_FWDDECL)
#define IL2CPP_STRUCT_fsPropertyAttribute_FWDDECL
#include <Modloader/app/structs/fsPropertyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_fsPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsPropertyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_fsPropertyAttribute_FWDDECL)
#include <Modloader/app/structs/fsPropertyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsPropertyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
