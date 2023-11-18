#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityTagHeaderValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityTagHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTagHeaderValue_DEFINED)
#include <Modloader/app/structs/EntityTagHeaderValue__Fields.h>
#if defined(IL2CPP_STRUCT_EntityTagHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityTagHeaderValue_DEFINED
struct EntityTagHeaderValue__Class;
struct EntityTagHeaderValue {
    struct EntityTagHeaderValue__Class* klass;
    MonitorData* monitor;
    struct EntityTagHeaderValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityTagHeaderValue_FWDDECL)
#define IL2CPP_STRUCT_EntityTagHeaderValue_FWDDECL
#include <Modloader/app/structs/EntityTagHeaderValue__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityTagHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTagHeaderValue_DEFINED) && !defined(IL2CPP_STRUCT_EntityTagHeaderValue_FWDDECL)
#include <Modloader/app/structs/EntityTagHeaderValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityTagHeaderValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
