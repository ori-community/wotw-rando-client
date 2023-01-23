#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModuleBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModuleBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModuleBuilder_DEFINED)
#include <Modloader/app/structs/ModuleBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_ModuleBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_ModuleBuilder_DEFINED
struct ModuleBuilder__Class;
struct ModuleBuilder {
    struct ModuleBuilder__Class* klass;
    MonitorData* monitor;
    struct ModuleBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModuleBuilder_FWDDECL)
#define IL2CPP_STRUCT_ModuleBuilder_FWDDECL
#include <Modloader/app/structs/ModuleBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_ModuleBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModuleBuilder_DEFINED) && !defined(IL2CPP_STRUCT_ModuleBuilder_FWDDECL)
#include <Modloader/app/structs/ModuleBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModuleBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
