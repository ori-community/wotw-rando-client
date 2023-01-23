#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntSizedArray__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntSizedArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntSizedArray__Fields_DEFINED)
#define IL2CPP_STRUCT_IntSizedArray__Fields_DEFINED
struct Int32__Array;
struct __declspec(align(8)) IntSizedArray__Fields {
    struct Int32__Array* objects;
    struct Int32__Array* negObjects;
};
#endif
#if !defined(IL2CPP_STRUCT_IntSizedArray__Fields_FWDDECL)
#define IL2CPP_STRUCT_IntSizedArray__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_IntSizedArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntSizedArray__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IntSizedArray__Fields_FWDDECL)
#include <Modloader/app/structs/IntSizedArray__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntSizedArray__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
