#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JPropertyKeyedCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JPropertyKeyedCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_JPropertyKeyedCollection_DEFINED)
#include <Modloader/app/structs/JPropertyKeyedCollection__Fields.h>
#if defined(IL2CPP_STRUCT_JPropertyKeyedCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_JPropertyKeyedCollection_DEFINED
struct JPropertyKeyedCollection__Class;
struct JPropertyKeyedCollection {
    struct JPropertyKeyedCollection__Class* klass;
    MonitorData* monitor;
    struct JPropertyKeyedCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JPropertyKeyedCollection_FWDDECL)
#define IL2CPP_STRUCT_JPropertyKeyedCollection_FWDDECL
#include <Modloader/app/structs/JPropertyKeyedCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_JPropertyKeyedCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_JPropertyKeyedCollection_DEFINED) && !defined(IL2CPP_STRUCT_JPropertyKeyedCollection_FWDDECL)
#include <Modloader/app/structs/JPropertyKeyedCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JPropertyKeyedCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
