#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_token_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_token_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_token_DEFINED)
#include <Modloader/app/structs/Datatype_token__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_token__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_token_DEFINED
struct Datatype_token__Class;
struct Datatype_token {
    struct Datatype_token__Class* klass;
    MonitorData* monitor;
    struct Datatype_token__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_token_FWDDECL)
#define IL2CPP_STRUCT_Datatype_token_FWDDECL
#include <Modloader/app/structs/Datatype_token__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_token_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_token_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_token_FWDDECL)
#include <Modloader/app/structs/Datatype_token.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_token.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
