#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityDataObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityDataObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDataObject_DEFINED)
#include <Modloader/app/structs/EntityDataObject__Fields.h>
#if defined(IL2CPP_STRUCT_EntityDataObject__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityDataObject_DEFINED
struct EntityDataObject__Class;
struct EntityDataObject {
    struct EntityDataObject__Class* klass;
    MonitorData* monitor;
    struct EntityDataObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityDataObject_FWDDECL)
#define IL2CPP_STRUCT_EntityDataObject_FWDDECL
#include <Modloader/app/structs/EntityDataObject__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityDataObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDataObject_DEFINED) && !defined(IL2CPP_STRUCT_EntityDataObject_FWDDECL)
#include <Modloader/app/structs/EntityDataObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityDataObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
