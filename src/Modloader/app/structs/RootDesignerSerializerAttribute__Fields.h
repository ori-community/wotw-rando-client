#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RootDesignerSerializerAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RootDesignerSerializerAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RootDesignerSerializerAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_RootDesignerSerializerAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) RootDesignerSerializerAttribute__Fields {
    bool reloadable;
    struct String* serializerTypeName;
    struct String* serializerBaseTypeName;
    struct String* typeId;
};
#endif
#if !defined(IL2CPP_STRUCT_RootDesignerSerializerAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_RootDesignerSerializerAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RootDesignerSerializerAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RootDesignerSerializerAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RootDesignerSerializerAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/RootDesignerSerializerAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RootDesignerSerializerAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
