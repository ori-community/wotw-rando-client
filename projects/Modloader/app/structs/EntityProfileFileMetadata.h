#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityProfileFileMetadata_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityProfileFileMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityProfileFileMetadata_DEFINED)
#include <Modloader/app/structs/EntityProfileFileMetadata__Fields.h>
#if defined(IL2CPP_STRUCT_EntityProfileFileMetadata__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityProfileFileMetadata_DEFINED
struct EntityProfileFileMetadata__Class;
struct EntityProfileFileMetadata {
    struct EntityProfileFileMetadata__Class* klass;
    MonitorData* monitor;
    struct EntityProfileFileMetadata__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityProfileFileMetadata_FWDDECL)
#define IL2CPP_STRUCT_EntityProfileFileMetadata_FWDDECL
#include <Modloader/app/structs/EntityProfileFileMetadata__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityProfileFileMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityProfileFileMetadata_DEFINED) && !defined(IL2CPP_STRUCT_EntityProfileFileMetadata_FWDDECL)
#include <Modloader/app/structs/EntityProfileFileMetadata.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityProfileFileMetadata.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
