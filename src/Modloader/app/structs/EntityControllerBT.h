#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityControllerBT_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityControllerBT_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityControllerBT_DEFINED)
#include <Modloader/app/structs/EntityControllerBT__Fields.h>
#if defined(IL2CPP_STRUCT_EntityControllerBT__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityControllerBT_DEFINED
struct EntityControllerBT__Class;
struct EntityControllerBT {
    struct EntityControllerBT__Class* klass;
    MonitorData* monitor;
    struct EntityControllerBT__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityControllerBT_FWDDECL)
#define IL2CPP_STRUCT_EntityControllerBT_FWDDECL
#include <Modloader/app/structs/EntityControllerBT__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityControllerBT_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityControllerBT_DEFINED) && !defined(IL2CPP_STRUCT_EntityControllerBT_FWDDECL)
#include <Modloader/app/structs/EntityControllerBT.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityControllerBT.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
