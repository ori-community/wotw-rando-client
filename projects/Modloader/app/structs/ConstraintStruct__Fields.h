#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintStruct__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintStruct__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintStruct__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintStruct__Fields_DEFINED
struct CompiledIdentityConstraint;
struct SelectorActiveAxis;
struct ArrayList;
struct Hashtable;
struct __declspec(align(8)) ConstraintStruct__Fields {
    struct CompiledIdentityConstraint* constraint;
    struct SelectorActiveAxis* axisSelector;
    struct ArrayList* axisFields;
    struct Hashtable* qualifiedTable;
    struct Hashtable* keyrefTable;
    int32_t tableDim;
};
#endif
#if !defined(IL2CPP_STRUCT_ConstraintStruct__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConstraintStruct__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/CompiledIdentityConstraint.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/SelectorActiveAxis.h>
#endif
#undef IL2CPP_STRUCT_ConstraintStruct__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintStruct__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintStruct__Fields_FWDDECL)
#include <Modloader/app/structs/ConstraintStruct__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintStruct__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
