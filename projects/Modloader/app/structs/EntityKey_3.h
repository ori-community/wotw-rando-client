#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityKey_3_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityKey_3_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityKey_3_DEFINED)
#include <Modloader/app/structs/EntityKey_3__Fields.h>
#if defined(IL2CPP_STRUCT_EntityKey_3__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityKey_3_DEFINED
struct EntityKey_3__Class;
struct EntityKey_3 {
    struct EntityKey_3__Class* klass;
    MonitorData* monitor;
    struct EntityKey_3__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityKey_3_FWDDECL)
#define IL2CPP_STRUCT_EntityKey_3_FWDDECL
#include <Modloader/app/structs/EntityKey_3__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityKey_3_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityKey_3_DEFINED) && !defined(IL2CPP_STRUCT_EntityKey_3_FWDDECL)
#include <Modloader/app/structs/EntityKey_3.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityKey_3.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
