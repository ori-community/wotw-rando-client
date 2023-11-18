#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityKey_4_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityKey_4_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityKey_4_DEFINED)
#include <Modloader/app/structs/EntityKey_4__Fields.h>
#if defined(IL2CPP_STRUCT_EntityKey_4__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityKey_4_DEFINED
struct EntityKey_4__Class;
struct EntityKey_4 {
    struct EntityKey_4__Class* klass;
    MonitorData* monitor;
    struct EntityKey_4__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityKey_4_FWDDECL)
#define IL2CPP_STRUCT_EntityKey_4_FWDDECL
#include <Modloader/app/structs/EntityKey_4__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityKey_4_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityKey_4_DEFINED) && !defined(IL2CPP_STRUCT_EntityKey_4_FWDDECL)
#include <Modloader/app/structs/EntityKey_4.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityKey_4.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
