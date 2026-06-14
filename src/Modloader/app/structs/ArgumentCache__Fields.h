#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArgumentCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArgumentCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgumentCache__Fields_DEFINED)
#define IL2CPP_STRUCT_ArgumentCache__Fields_DEFINED
struct Object_1;
struct String;
struct __declspec(align(8)) ArgumentCache__Fields {
    struct Object_1* m_ObjectArgument;
    struct String* m_ObjectArgumentAssemblyTypeName;
    int32_t m_IntArgument;
    float m_FloatArgument;
    struct String* m_StringArgument;
    bool m_BoolArgument;
};
#endif
#if !defined(IL2CPP_STRUCT_ArgumentCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_ArgumentCache__Fields_FWDDECL
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ArgumentCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgumentCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ArgumentCache__Fields_FWDDECL)
#include <Modloader/app/structs/ArgumentCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArgumentCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
