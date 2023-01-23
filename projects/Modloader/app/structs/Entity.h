#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Entity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Entity_INITIALIZING
#if !defined(IL2CPP_STRUCT_Entity_DEFINED)
#include <Modloader/app/structs/Entity__Fields.h>
#if defined(IL2CPP_STRUCT_Entity__Fields_DEFINED)
#define IL2CPP_STRUCT_Entity_DEFINED
struct Entity__Class;
struct Entity {
    struct Entity__Class* klass;
    MonitorData* monitor;
    struct Entity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Entity_FWDDECL)
#define IL2CPP_STRUCT_Entity_FWDDECL
#include <Modloader/app/structs/Entity__Class.h>
#endif
#undef IL2CPP_STRUCT_Entity_INITIALIZING
#if !defined(IL2CPP_STRUCT_Entity_DEFINED) && !defined(IL2CPP_STRUCT_Entity_FWDDECL)
#include <Modloader/app/structs/Entity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Entity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
