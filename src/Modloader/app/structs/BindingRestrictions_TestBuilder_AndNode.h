#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BindingRestrictions_TestBuilder_AndNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BindingRestrictions_TestBuilder_AndNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingRestrictions_TestBuilder_AndNode_DEFINED)
#define IL2CPP_STRUCT_BindingRestrictions_TestBuilder_AndNode_DEFINED
struct Expression;
struct BindingRestrictions_TestBuilder_AndNode {
    int32_t Depth;
    struct Expression* Node;
};
#endif
#if !defined(IL2CPP_STRUCT_BindingRestrictions_TestBuilder_AndNode_FWDDECL)
#define IL2CPP_STRUCT_BindingRestrictions_TestBuilder_AndNode_FWDDECL
#include <Modloader/app/structs/Expression.h>
#endif
#undef IL2CPP_STRUCT_BindingRestrictions_TestBuilder_AndNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingRestrictions_TestBuilder_AndNode_DEFINED) && !defined(IL2CPP_STRUCT_BindingRestrictions_TestBuilder_AndNode_FWDDECL)
#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BindingRestrictions_TestBuilder_AndNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
