#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectGetArgs_From__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectGetArgs_From__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectGetArgs_From__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectGetArgs_From__Fields_DEFINED
struct String__Array;
struct __declspec(align(8)) ObjectGetArgs_From__Fields {
    struct String__Array* id;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjectGetArgs_From__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectGetArgs_From__Fields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_ObjectGetArgs_From__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectGetArgs_From__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectGetArgs_From__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectGetArgs_From__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectGetArgs_From__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
