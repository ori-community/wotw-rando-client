#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComponentConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComponentConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentConverter_DEFINED)
#include <Modloader/app/structs/ComponentConverter__Fields.h>
#if defined(IL2CPP_STRUCT_ComponentConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_ComponentConverter_DEFINED
struct ComponentConverter__Class;
struct ComponentConverter {
    struct ComponentConverter__Class* klass;
    MonitorData* monitor;
    struct ComponentConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComponentConverter_FWDDECL)
#define IL2CPP_STRUCT_ComponentConverter_FWDDECL
#include <Modloader/app/structs/ComponentConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_ComponentConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentConverter_DEFINED) && !defined(IL2CPP_STRUCT_ComponentConverter_FWDDECL)
#include <Modloader/app/structs/ComponentConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComponentConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
