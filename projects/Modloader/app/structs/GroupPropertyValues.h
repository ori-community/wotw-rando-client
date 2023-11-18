#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupPropertyValues_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupPropertyValues_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupPropertyValues_DEFINED)
#include <Modloader/app/structs/GroupPropertyValues__Fields.h>
#if defined(IL2CPP_STRUCT_GroupPropertyValues__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupPropertyValues_DEFINED
struct GroupPropertyValues__Class;
struct GroupPropertyValues {
    struct GroupPropertyValues__Class* klass;
    MonitorData* monitor;
    struct GroupPropertyValues__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupPropertyValues_FWDDECL)
#define IL2CPP_STRUCT_GroupPropertyValues_FWDDECL
#include <Modloader/app/structs/GroupPropertyValues__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupPropertyValues_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupPropertyValues_DEFINED) && !defined(IL2CPP_STRUCT_GroupPropertyValues_FWDDECL)
#include <Modloader/app/structs/GroupPropertyValues.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupPropertyValues.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
