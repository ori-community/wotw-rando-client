#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseGroupType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseGroupType_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseGroupType_DEFINED)
#include <Modloader/app/structs/BaseGroupType__Fields.h>
#if defined(IL2CPP_STRUCT_BaseGroupType__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseGroupType_DEFINED
struct BaseGroupType__Class;
struct BaseGroupType {
    struct BaseGroupType__Class* klass;
    MonitorData* monitor;
    struct BaseGroupType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseGroupType_FWDDECL)
#define IL2CPP_STRUCT_BaseGroupType_FWDDECL
#include <Modloader/app/structs/BaseGroupType__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseGroupType_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseGroupType_DEFINED) && !defined(IL2CPP_STRUCT_BaseGroupType_FWDDECL)
#include <Modloader/app/structs/BaseGroupType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseGroupType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
