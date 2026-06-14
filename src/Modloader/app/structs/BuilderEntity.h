#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderEntity_DEFINED)
#include <Modloader/app/structs/BuilderEntity__Fields.h>
#if defined(IL2CPP_STRUCT_BuilderEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_BuilderEntity_DEFINED
struct BuilderEntity__Class;
struct BuilderEntity {
    struct BuilderEntity__Class* klass;
    MonitorData* monitor;
    struct BuilderEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuilderEntity_FWDDECL)
#define IL2CPP_STRUCT_BuilderEntity_FWDDECL
#include <Modloader/app/structs/BuilderEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_BuilderEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderEntity_DEFINED) && !defined(IL2CPP_STRUCT_BuilderEntity_FWDDECL)
#include <Modloader/app/structs/BuilderEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
