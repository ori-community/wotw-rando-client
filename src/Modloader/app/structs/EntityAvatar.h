#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityAvatar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityAvatar_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityAvatar_DEFINED)
#include <Modloader/app/structs/EntityAvatar__Fields.h>
#if defined(IL2CPP_STRUCT_EntityAvatar__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityAvatar_DEFINED
struct EntityAvatar__Class;
struct EntityAvatar {
    struct EntityAvatar__Class* klass;
    MonitorData* monitor;
    struct EntityAvatar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityAvatar_FWDDECL)
#define IL2CPP_STRUCT_EntityAvatar_FWDDECL
#include <Modloader/app/structs/EntityAvatar__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityAvatar_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityAvatar_DEFINED) && !defined(IL2CPP_STRUCT_EntityAvatar_FWDDECL)
#include <Modloader/app/structs/EntityAvatar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityAvatar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
