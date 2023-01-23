#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityFreezeController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityFreezeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityFreezeController_DEFINED)
#include <Modloader/app/structs/EntityFreezeController__Fields.h>
#if defined(IL2CPP_STRUCT_EntityFreezeController__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityFreezeController_DEFINED
struct EntityFreezeController__Class;
struct EntityFreezeController {
    struct EntityFreezeController__Class* klass;
    MonitorData* monitor;
    struct EntityFreezeController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityFreezeController_FWDDECL)
#define IL2CPP_STRUCT_EntityFreezeController_FWDDECL
#include <Modloader/app/structs/EntityFreezeController__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityFreezeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityFreezeController_DEFINED) && !defined(IL2CPP_STRUCT_EntityFreezeController_FWDDECL)
#include <Modloader/app/structs/EntityFreezeController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityFreezeController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
