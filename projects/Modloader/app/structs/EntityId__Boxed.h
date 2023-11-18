#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityId__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityId__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityId__Boxed_DEFINED)
#include <Modloader/app/structs/EntityId.h>
#if defined(IL2CPP_STRUCT_EntityId_DEFINED)
#define IL2CPP_STRUCT_EntityId__Boxed_DEFINED
struct EntityId__Class;
struct EntityId__Boxed {
    struct EntityId__Class* klass;
    MonitorData* monitor;
    struct EntityId fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityId__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EntityId__Boxed_FWDDECL
#include <Modloader/app/structs/EntityId__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityId__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityId__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EntityId__Boxed_FWDDECL)
#include <Modloader/app/structs/EntityId__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityId__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
