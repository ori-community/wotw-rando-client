#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomAttributeNamedArgument_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomAttributeNamedArgument_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeNamedArgument_DEFINED)
#include <Modloader/app/structs/CustomAttributeTypedArgument.h>
#if defined(IL2CPP_STRUCT_CustomAttributeTypedArgument_DEFINED)
#define IL2CPP_STRUCT_CustomAttributeNamedArgument_DEFINED
struct MemberInfo_1;
struct CustomAttributeNamedArgument {
    struct CustomAttributeTypedArgument typedArgument;
    struct MemberInfo_1* memberInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomAttributeNamedArgument_FWDDECL)
#define IL2CPP_STRUCT_CustomAttributeNamedArgument_FWDDECL
#include <Modloader/app/structs/MemberInfo_1.h>
#endif
#undef IL2CPP_STRUCT_CustomAttributeNamedArgument_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeNamedArgument_DEFINED) && !defined(IL2CPP_STRUCT_CustomAttributeNamedArgument_FWDDECL)
#include <Modloader/app/structs/CustomAttributeNamedArgument.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomAttributeNamedArgument.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
