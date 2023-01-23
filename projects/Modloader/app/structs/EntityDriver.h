#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityDriver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDriver_DEFINED)
#include <Modloader/app/structs/EntityDriver__Fields.h>
#if defined(IL2CPP_STRUCT_EntityDriver__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityDriver_DEFINED
struct EntityDriver__Class;
struct EntityDriver {
    struct EntityDriver__Class* klass;
    MonitorData* monitor;
    struct EntityDriver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityDriver_FWDDECL)
#define IL2CPP_STRUCT_EntityDriver_FWDDECL
#include <Modloader/app/structs/EntityDriver__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDriver_DEFINED) && !defined(IL2CPP_STRUCT_EntityDriver_FWDDECL)
#include <Modloader/app/structs/EntityDriver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityDriver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
