#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeData__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeData__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeData__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TypeData__StaticFields_DEFINED
struct String__Array;
struct TypeData__StaticFields {
    struct String__Array* keywords;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeData__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TypeData__StaticFields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_TypeData__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeData__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TypeData__StaticFields_FWDDECL)
#include <Modloader/app/structs/TypeData__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeData__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
