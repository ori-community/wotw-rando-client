#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRelationPropertyDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRelationPropertyDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelationPropertyDescriptor__Fields_DEFINED)
#include <Modloader/app/structs/PropertyDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRelationPropertyDescriptor__Fields_DEFINED
struct DataRelation;
struct DataRelationPropertyDescriptor__Fields {
    struct PropertyDescriptor__Fields _;
    struct DataRelation* _Relation_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRelationPropertyDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataRelationPropertyDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/DataRelation.h>
#endif
#undef IL2CPP_STRUCT_DataRelationPropertyDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelationPropertyDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataRelationPropertyDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/DataRelationPropertyDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRelationPropertyDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
