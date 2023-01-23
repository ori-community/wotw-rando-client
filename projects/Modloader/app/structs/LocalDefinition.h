#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalDefinition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDefinition_DEFINED)
#define IL2CPP_STRUCT_LocalDefinition_DEFINED
struct ParameterExpression;
struct LocalDefinition {
    int32_t _Index_k__BackingField;
    struct ParameterExpression* _Parameter_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_LocalDefinition_FWDDECL)
#define IL2CPP_STRUCT_LocalDefinition_FWDDECL
#include <Modloader/app/structs/ParameterExpression.h>
#endif
#undef IL2CPP_STRUCT_LocalDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDefinition_DEFINED) && !defined(IL2CPP_STRUCT_LocalDefinition_FWDDECL)
#include <Modloader/app/structs/LocalDefinition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalDefinition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
