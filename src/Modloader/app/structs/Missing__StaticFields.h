#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Missing__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Missing__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Missing__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Missing__StaticFields_DEFINED
struct Missing;
struct Missing__StaticFields {
    struct Missing* Value;
};
#endif
#if !defined(IL2CPP_STRUCT_Missing__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Missing__StaticFields_FWDDECL
#include <Modloader/app/structs/Missing.h>
#endif
#undef IL2CPP_STRUCT_Missing__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Missing__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Missing__StaticFields_FWDDECL)
#include <Modloader/app/structs/Missing__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Missing__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
