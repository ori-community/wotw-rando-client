#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomAttributeTypedArgument_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomAttributeTypedArgument_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeTypedArgument_DEFINED)
#define IL2CPP_STRUCT_CustomAttributeTypedArgument_DEFINED
struct Type;
struct Object;
struct CustomAttributeTypedArgument {
    struct Type* argumentType;
    struct Object* value;
};
#endif
#if !defined(IL2CPP_STRUCT_CustomAttributeTypedArgument_FWDDECL)
#define IL2CPP_STRUCT_CustomAttributeTypedArgument_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_CustomAttributeTypedArgument_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeTypedArgument_DEFINED) && !defined(IL2CPP_STRUCT_CustomAttributeTypedArgument_FWDDECL)
#include <Modloader/app/structs/CustomAttributeTypedArgument.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomAttributeTypedArgument.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
