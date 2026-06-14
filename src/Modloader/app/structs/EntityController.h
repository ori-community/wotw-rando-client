#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityController_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityController_DEFINED)
#include <Modloader/app/structs/EntityController__Fields.h>
#if defined(IL2CPP_STRUCT_EntityController__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityController_DEFINED
struct EntityController__Class;
struct EntityController {
    struct EntityController__Class* klass;
    MonitorData* monitor;
    struct EntityController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityController_FWDDECL)
#define IL2CPP_STRUCT_EntityController_FWDDECL
#include <Modloader/app/structs/EntityController__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityController_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityController_DEFINED) && !defined(IL2CPP_STRUCT_EntityController_FWDDECL)
#include <Modloader/app/structs/EntityController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
