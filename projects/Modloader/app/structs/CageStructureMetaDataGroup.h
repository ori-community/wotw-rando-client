#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CageStructureMetaDataGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CageStructureMetaDataGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageStructureMetaDataGroup_DEFINED)
#include <Modloader/app/structs/CageStructureMetaDataGroup__Fields.h>
#if defined(IL2CPP_STRUCT_CageStructureMetaDataGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_CageStructureMetaDataGroup_DEFINED
struct CageStructureMetaDataGroup__Class;
struct CageStructureMetaDataGroup {
    struct CageStructureMetaDataGroup__Class* klass;
    MonitorData* monitor;
    struct CageStructureMetaDataGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CageStructureMetaDataGroup_FWDDECL)
#define IL2CPP_STRUCT_CageStructureMetaDataGroup_FWDDECL
#include <Modloader/app/structs/CageStructureMetaDataGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_CageStructureMetaDataGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageStructureMetaDataGroup_DEFINED) && !defined(IL2CPP_STRUCT_CageStructureMetaDataGroup_FWDDECL)
#include <Modloader/app/structs/CageStructureMetaDataGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CageStructureMetaDataGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
