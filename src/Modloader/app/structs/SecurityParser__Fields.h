#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityParser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityParser__Fields_DEFINED)
#include <Modloader/app/structs/SmallXmlParser__Fields.h>
#if defined(IL2CPP_STRUCT_SmallXmlParser__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityParser__Fields_DEFINED
struct SecurityElement;
struct Stack;
struct SecurityParser__Fields {
    struct SmallXmlParser__Fields _;
    struct SecurityElement* root;
    struct SecurityElement* current;
    struct Stack* stack;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityParser__Fields_FWDDECL)
#define IL2CPP_STRUCT_SecurityParser__Fields_FWDDECL
#include <Modloader/app/structs/SecurityElement.h>
#include <Modloader/app/structs/Stack.h>
#endif
#undef IL2CPP_STRUCT_SecurityParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityParser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SecurityParser__Fields_FWDDECL)
#include <Modloader/app/structs/SecurityParser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityParser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
