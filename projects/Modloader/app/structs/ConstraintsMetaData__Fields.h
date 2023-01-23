#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintsMetaData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintsMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintsMetaData__Fields_DEFINED)
#include <Modloader/app/structs/ConstraintFlag__Enum.h>
#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/EntityId.h>
#if defined(IL2CPP_STRUCT_EntityId_DEFINED) && defined(IL2CPP_STRUCT_Constraint__Enum_DEFINED) && defined(IL2CPP_STRUCT_ConstraintFlag__Enum_DEFINED)
#define IL2CPP_STRUCT_ConstraintsMetaData__Fields_DEFINED
struct __declspec(align(8)) ConstraintsMetaData__Fields {
    struct EntityId Entity;
    Constraint__Enum Type;

    ConstraintFlag__Enum Flags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstraintsMetaData__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConstraintsMetaData__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ConstraintsMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintsMetaData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintsMetaData__Fields_FWDDECL)
#include <Modloader/app/structs/ConstraintsMetaData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintsMetaData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
