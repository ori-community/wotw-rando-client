#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoField__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoField__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoField__Fields_DEFINED)
#include <Modloader/app/structs/FieldAttributes__Enum.h>
#include <Modloader/app/structs/RuntimeFieldHandle.h>
#if defined(IL2CPP_STRUCT_RuntimeFieldHandle_DEFINED) && defined(IL2CPP_STRUCT_FieldAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_MonoField__Fields_DEFINED
struct String;
struct Type;
struct __declspec(align(8)) MonoField__Fields {
    void* klass;
    struct RuntimeFieldHandle fhandle;
    struct String* name;
    struct Type* type;
    FieldAttributes__Enum attrs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoField__Fields_FWDDECL)
#define IL2CPP_STRUCT_MonoField__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_MonoField__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoField__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MonoField__Fields_FWDDECL)
#include <Modloader/app/structs/MonoField__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoField__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
