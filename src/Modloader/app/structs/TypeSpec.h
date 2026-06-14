#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeSpec_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeSpec_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeSpec_DEFINED)
#include <Modloader/app/structs/TypeSpec__Fields.h>
#if defined(IL2CPP_STRUCT_TypeSpec__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeSpec_DEFINED
struct TypeSpec__Class;
struct TypeSpec {
    struct TypeSpec__Class* klass;
    MonitorData* monitor;
    struct TypeSpec__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeSpec_FWDDECL)
#define IL2CPP_STRUCT_TypeSpec_FWDDECL
#include <Modloader/app/structs/TypeSpec__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeSpec_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeSpec_DEFINED) && !defined(IL2CPP_STRUCT_TypeSpec_FWDDECL)
#include <Modloader/app/structs/TypeSpec.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeSpec.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
