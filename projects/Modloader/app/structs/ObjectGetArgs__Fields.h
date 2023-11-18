#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectGetArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectGetArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectGetArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectGetArgs__Fields_DEFINED
struct ObjectGetArgs_From;
struct ObjectGetArgs_TransformSelectProperty__Array;
struct __declspec(align(8)) ObjectGetArgs__Fields {
    struct ObjectGetArgs_From* from;
    struct ObjectGetArgs_TransformSelectProperty__Array* transform;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjectGetArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectGetArgs__Fields_FWDDECL
#include <Modloader/app/structs/ObjectGetArgs_From.h>
#include <Modloader/app/structs/ObjectGetArgs_TransformSelectProperty__Array.h>
#endif
#undef IL2CPP_STRUCT_ObjectGetArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectGetArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectGetArgs__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectGetArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectGetArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
