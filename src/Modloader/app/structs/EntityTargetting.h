#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityTargetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityTargetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTargetting_DEFINED)
#include <Modloader/app/structs/EntityTargetting__Fields.h>
#if defined(IL2CPP_STRUCT_EntityTargetting__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityTargetting_DEFINED
struct EntityTargetting__Class;
struct EntityTargetting {
    struct EntityTargetting__Class* klass;
    MonitorData* monitor;
    struct EntityTargetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityTargetting_FWDDECL)
#define IL2CPP_STRUCT_EntityTargetting_FWDDECL
#include <Modloader/app/structs/EntityTargetting__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityTargetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTargetting_DEFINED) && !defined(IL2CPP_STRUCT_EntityTargetting_FWDDECL)
#include <Modloader/app/structs/EntityTargetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityTargetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
