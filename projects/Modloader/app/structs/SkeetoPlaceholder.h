#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoPlaceholder_DEFINED)
#include <Modloader/app/structs/SkeetoPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_SkeetoPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SkeetoPlaceholder_DEFINED
struct SkeetoPlaceholder__Class;
struct SkeetoPlaceholder {
    struct SkeetoPlaceholder__Class* klass;
    MonitorData* monitor;
    struct SkeetoPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_SkeetoPlaceholder_FWDDECL
#include <Modloader/app/structs/SkeetoPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_SkeetoPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoPlaceholder_FWDDECL)
#include <Modloader/app/structs/SkeetoPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
