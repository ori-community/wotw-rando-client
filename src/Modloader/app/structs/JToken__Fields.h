#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JToken__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JToken__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JToken__Fields_DEFINED)
#define IL2CPP_STRUCT_JToken__Fields_DEFINED
struct JContainer;
struct JToken;
struct Object;
struct __declspec(align(8)) JToken__Fields {
    struct JContainer* _parent;
    struct JToken* _previous;
    struct JToken* _next;
    struct Object* _annotations;
};
#endif
#if !defined(IL2CPP_STRUCT_JToken__Fields_FWDDECL)
#define IL2CPP_STRUCT_JToken__Fields_FWDDECL
#include <Modloader/app/structs/JContainer.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_JToken__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JToken__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JToken__Fields_FWDDECL)
#include <Modloader/app/structs/JToken__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JToken__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
