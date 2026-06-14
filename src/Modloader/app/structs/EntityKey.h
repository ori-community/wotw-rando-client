#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityKey_DEFINED)
#include <Modloader/app/structs/EntityKey__Fields.h>
#if defined(IL2CPP_STRUCT_EntityKey__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityKey_DEFINED
struct EntityKey__Class;
struct EntityKey {
    struct EntityKey__Class* klass;
    MonitorData* monitor;
    struct EntityKey__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityKey_FWDDECL)
#define IL2CPP_STRUCT_EntityKey_FWDDECL
#include <Modloader/app/structs/EntityKey__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityKey_DEFINED) && !defined(IL2CPP_STRUCT_EntityKey_FWDDECL)
#include <Modloader/app/structs/EntityKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
