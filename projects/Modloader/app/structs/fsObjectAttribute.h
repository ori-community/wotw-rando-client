#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsObjectAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsObjectAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsObjectAttribute_DEFINED)
#include <Modloader/app/structs/fsObjectAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_fsObjectAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_fsObjectAttribute_DEFINED
struct fsObjectAttribute__Class;
struct fsObjectAttribute {
    struct fsObjectAttribute__Class* klass;
    MonitorData* monitor;
    struct fsObjectAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsObjectAttribute_FWDDECL)
#define IL2CPP_STRUCT_fsObjectAttribute_FWDDECL
#include <Modloader/app/structs/fsObjectAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_fsObjectAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsObjectAttribute_DEFINED) && !defined(IL2CPP_STRUCT_fsObjectAttribute_FWDDECL)
#include <Modloader/app/structs/fsObjectAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsObjectAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
