#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityMemberRole_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityMemberRole_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityMemberRole_DEFINED)
#include <Modloader/app/structs/EntityMemberRole__Fields.h>
#if defined(IL2CPP_STRUCT_EntityMemberRole__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityMemberRole_DEFINED
struct EntityMemberRole__Class;
struct EntityMemberRole {
    struct EntityMemberRole__Class* klass;
    MonitorData* monitor;
    struct EntityMemberRole__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityMemberRole_FWDDECL)
#define IL2CPP_STRUCT_EntityMemberRole_FWDDECL
#include <Modloader/app/structs/EntityMemberRole__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityMemberRole_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityMemberRole_DEFINED) && !defined(IL2CPP_STRUCT_EntityMemberRole_FWDDECL)
#include <Modloader/app/structs/EntityMemberRole.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityMemberRole.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
