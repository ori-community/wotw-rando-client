#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonBuilder_Object_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonBuilder_Object_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonBuilder_Object_DEFINED)
#define IL2CPP_STRUCT_JsonBuilder_Object_DEFINED
struct JsonBuilder;
struct JsonBuilder_Object {
    int32_t m_ident;
    struct JsonBuilder* m_builder;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonBuilder_Object_FWDDECL)
#define IL2CPP_STRUCT_JsonBuilder_Object_FWDDECL
#include <Modloader/app/structs/JsonBuilder.h>
#endif
#undef IL2CPP_STRUCT_JsonBuilder_Object_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonBuilder_Object_DEFINED) && !defined(IL2CPP_STRUCT_JsonBuilder_Object_FWDDECL)
#include <Modloader/app/structs/JsonBuilder_Object.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonBuilder_Object.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
