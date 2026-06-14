#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject_DEFINED)
#include <Modloader/app/structs/InteractionObject__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionObject__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionObject_DEFINED
struct InteractionObject__Class;
struct InteractionObject {
    struct InteractionObject__Class* klass;
    MonitorData* monitor;
    struct InteractionObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionObject_FWDDECL)
#define IL2CPP_STRUCT_InteractionObject_FWDDECL
#include <Modloader/app/structs/InteractionObject__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject_DEFINED) && !defined(IL2CPP_STRUCT_InteractionObject_FWDDECL)
#include <Modloader/app/structs/InteractionObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
