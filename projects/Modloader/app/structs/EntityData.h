#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityData_DEFINED)
#include <Modloader/app/structs/EntityData__Fields.h>
#if defined(IL2CPP_STRUCT_EntityData__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityData_DEFINED
struct EntityData__Class;
struct EntityData {
    struct EntityData__Class* klass;
    MonitorData* monitor;
    struct EntityData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityData_FWDDECL)
#define IL2CPP_STRUCT_EntityData_FWDDECL
#include <Modloader/app/structs/EntityData__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityData_DEFINED) && !defined(IL2CPP_STRUCT_EntityData_FWDDECL)
#include <Modloader/app/structs/EntityData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
