#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedJsonBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedJsonBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedJsonBuilder_DEFINED)
#define IL2CPP_STRUCT_SharedJsonBuilder_DEFINED
struct JsonBuilder;
struct SharedJsonBuilder {
    struct JsonBuilder* Instance;
};
#endif
#if !defined(IL2CPP_STRUCT_SharedJsonBuilder_FWDDECL)
#define IL2CPP_STRUCT_SharedJsonBuilder_FWDDECL
#include <Modloader/app/structs/JsonBuilder.h>
#endif
#undef IL2CPP_STRUCT_SharedJsonBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedJsonBuilder_DEFINED) && !defined(IL2CPP_STRUCT_SharedJsonBuilder_FWDDECL)
#include <Modloader/app/structs/SharedJsonBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedJsonBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
