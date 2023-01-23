#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ElementInit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ElementInit_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElementInit_DEFINED)
#include <Modloader/app/structs/ElementInit__Fields.h>
#if defined(IL2CPP_STRUCT_ElementInit__Fields_DEFINED)
#define IL2CPP_STRUCT_ElementInit_DEFINED
struct ElementInit__Class;
struct ElementInit {
    struct ElementInit__Class* klass;
    MonitorData* monitor;
    struct ElementInit__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ElementInit_FWDDECL)
#define IL2CPP_STRUCT_ElementInit_FWDDECL
#include <Modloader/app/structs/ElementInit__Class.h>
#endif
#undef IL2CPP_STRUCT_ElementInit_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElementInit_DEFINED) && !defined(IL2CPP_STRUCT_ElementInit_FWDDECL)
#include <Modloader/app/structs/ElementInit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ElementInit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
