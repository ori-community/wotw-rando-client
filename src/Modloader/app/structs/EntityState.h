#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityState_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityState_DEFINED)
#include <Modloader/app/structs/EntityState__Fields.h>
#if defined(IL2CPP_STRUCT_EntityState__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityState_DEFINED
struct EntityState__Class;
struct EntityState {
    struct EntityState__Class* klass;
    MonitorData* monitor;
    struct EntityState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityState_FWDDECL)
#define IL2CPP_STRUCT_EntityState_FWDDECL
#include <Modloader/app/structs/EntityState__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityState_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityState_DEFINED) && !defined(IL2CPP_STRUCT_EntityState_FWDDECL)
#include <Modloader/app/structs/EntityState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
