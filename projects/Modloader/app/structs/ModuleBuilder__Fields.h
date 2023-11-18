#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModuleBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModuleBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModuleBuilder__Fields_DEFINED)
#include <Modloader/app/structs/Module__Fields.h>
#if defined(IL2CPP_STRUCT_Module__Fields_DEFINED)
#define IL2CPP_STRUCT_ModuleBuilder__Fields_DEFINED
struct ModuleBuilder__Fields {
    struct Module__Fields _;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModuleBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_ModuleBuilder__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ModuleBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModuleBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ModuleBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/ModuleBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModuleBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
