#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallOptions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallOptions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_CallOptions__Fields_DEFINED
struct String__Array;
struct __declspec(align(8)) CallOptions__Fields {
    struct String__Array* return_1;
};
#endif
#if !defined(IL2CPP_STRUCT_CallOptions__Fields_FWDDECL)
#define IL2CPP_STRUCT_CallOptions__Fields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_CallOptions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallOptions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CallOptions__Fields_FWDDECL)
#include <Modloader/app/structs/CallOptions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallOptions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
