#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Component_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Component_INITIALIZING
#if !defined(IL2CPP_STRUCT_Component_DEFINED)
#include <Modloader/app/structs/Component__Fields.h>
#if defined(IL2CPP_STRUCT_Component__Fields_DEFINED)
#define IL2CPP_STRUCT_Component_DEFINED
struct Component__Class;
struct Component {
    struct Component__Class* klass;
    MonitorData* monitor;
    struct Component__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Component_FWDDECL)
#define IL2CPP_STRUCT_Component_FWDDECL
#include <Modloader/app/structs/Component__Class.h>
#endif
#undef IL2CPP_STRUCT_Component_INITIALIZING
#if !defined(IL2CPP_STRUCT_Component_DEFINED) && !defined(IL2CPP_STRUCT_Component_FWDDECL)
#include <Modloader/app/structs/Component.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Component.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
