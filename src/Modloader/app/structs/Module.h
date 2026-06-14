#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Module_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Module_INITIALIZING
#if !defined(IL2CPP_STRUCT_Module_DEFINED)
#include <Modloader/app/structs/Module__Fields.h>
#if defined(IL2CPP_STRUCT_Module__Fields_DEFINED)
#define IL2CPP_STRUCT_Module_DEFINED
struct Module__Class;
struct Module {
    struct Module__Class* klass;
    MonitorData* monitor;
    struct Module__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Module_FWDDECL)
#define IL2CPP_STRUCT_Module_FWDDECL
#include <Modloader/app/structs/Module__Class.h>
#endif
#undef IL2CPP_STRUCT_Module_INITIALIZING
#if !defined(IL2CPP_STRUCT_Module_DEFINED) && !defined(IL2CPP_STRUCT_Module_FWDDECL)
#include <Modloader/app/structs/Module.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Module.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
