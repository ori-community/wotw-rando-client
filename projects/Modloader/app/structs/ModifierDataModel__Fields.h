#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModifierDataModel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModifierDataModel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierDataModel__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_ModifierDataModel__Fields_DEFINED
struct Type;
struct String;
struct __declspec(align(8)) ModifierDataModel__Fields {
    struct Type* Type;
    bool IsActive;
    struct String* Name;
    struct Color Color;
    struct String* AssemblyQualifiedName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModifierDataModel__Fields_FWDDECL)
#define IL2CPP_STRUCT_ModifierDataModel__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ModifierDataModel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierDataModel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ModifierDataModel__Fields_FWDDECL)
#include <Modloader/app/structs/ModifierDataModel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModifierDataModel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
