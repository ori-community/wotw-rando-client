#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupCollection_DEFINED)
#include <Modloader/app/structs/GroupCollection__Fields.h>
#if defined(IL2CPP_STRUCT_GroupCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupCollection_DEFINED
struct GroupCollection__Class;
struct GroupCollection {
    struct GroupCollection__Class* klass;
    MonitorData* monitor;
    struct GroupCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupCollection_FWDDECL)
#define IL2CPP_STRUCT_GroupCollection_FWDDECL
#include <Modloader/app/structs/GroupCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupCollection_DEFINED) && !defined(IL2CPP_STRUCT_GroupCollection_FWDDECL)
#include <Modloader/app/structs/GroupCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
