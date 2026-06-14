#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityProfileBody_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityProfileBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityProfileBody_DEFINED)
#include <Modloader/app/structs/EntityProfileBody__Fields.h>
#if defined(IL2CPP_STRUCT_EntityProfileBody__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityProfileBody_DEFINED
struct EntityProfileBody__Class;
struct EntityProfileBody {
    struct EntityProfileBody__Class* klass;
    MonitorData* monitor;
    struct EntityProfileBody__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityProfileBody_FWDDECL)
#define IL2CPP_STRUCT_EntityProfileBody_FWDDECL
#include <Modloader/app/structs/EntityProfileBody__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityProfileBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityProfileBody_DEFINED) && !defined(IL2CPP_STRUCT_EntityProfileBody_FWDDECL)
#include <Modloader/app/structs/EntityProfileBody.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityProfileBody.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
