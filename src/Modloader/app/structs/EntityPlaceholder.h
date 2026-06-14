#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholder_DEFINED)
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityPlaceholder_DEFINED
struct EntityPlaceholder__Class;
struct EntityPlaceholder {
    struct EntityPlaceholder__Class* klass;
    MonitorData* monitor;
    struct EntityPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_EntityPlaceholder_FWDDECL
#include <Modloader/app/structs/EntityPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_EntityPlaceholder_FWDDECL)
#include <Modloader/app/structs/EntityPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
