#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FieldMetadata_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FieldMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldMetadata_DEFINED)
#include <Modloader/app/structs/FieldMetadata__Fields.h>
#if defined(IL2CPP_STRUCT_FieldMetadata__Fields_DEFINED)
#define IL2CPP_STRUCT_FieldMetadata_DEFINED
struct FieldMetadata__Class;
struct FieldMetadata {
    struct FieldMetadata__Class* klass;
    MonitorData* monitor;
    struct FieldMetadata__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FieldMetadata_FWDDECL)
#define IL2CPP_STRUCT_FieldMetadata_FWDDECL
#include <Modloader/app/structs/FieldMetadata__Class.h>
#endif
#undef IL2CPP_STRUCT_FieldMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldMetadata_DEFINED) && !defined(IL2CPP_STRUCT_FieldMetadata_FWDDECL)
#include <Modloader/app/structs/FieldMetadata.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FieldMetadata.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
