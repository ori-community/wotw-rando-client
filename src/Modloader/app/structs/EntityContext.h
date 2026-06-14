#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityContext_DEFINED)
#include <Modloader/app/structs/EntityContext__Fields.h>
#if defined(IL2CPP_STRUCT_EntityContext__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityContext_DEFINED
struct EntityContext__Class;
struct EntityContext {
    struct EntityContext__Class* klass;
    MonitorData* monitor;
    struct EntityContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityContext_FWDDECL)
#define IL2CPP_STRUCT_EntityContext_FWDDECL
#include <Modloader/app/structs/EntityContext__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityContext_DEFINED) && !defined(IL2CPP_STRUCT_EntityContext_FWDDECL)
#include <Modloader/app/structs/EntityContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
