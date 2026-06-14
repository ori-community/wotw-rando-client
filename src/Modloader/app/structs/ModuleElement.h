#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModuleElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModuleElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModuleElement_DEFINED)
#define IL2CPP_STRUCT_ModuleElement_DEFINED
struct ModuleElement__Class;
struct ModuleElement {
    struct ModuleElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ModuleElement_FWDDECL)
#define IL2CPP_STRUCT_ModuleElement_FWDDECL
#include <Modloader/app/structs/ModuleElement__Class.h>
#endif
#undef IL2CPP_STRUCT_ModuleElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModuleElement_DEFINED) && !defined(IL2CPP_STRUCT_ModuleElement_FWDDECL)
#include <Modloader/app/structs/ModuleElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModuleElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
