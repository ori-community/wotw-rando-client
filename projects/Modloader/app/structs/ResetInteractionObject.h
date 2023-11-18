#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResetInteractionObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResetInteractionObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResetInteractionObject_DEFINED)
#include <Modloader/app/structs/ResetInteractionObject__Fields.h>
#if defined(IL2CPP_STRUCT_ResetInteractionObject__Fields_DEFINED)
#define IL2CPP_STRUCT_ResetInteractionObject_DEFINED
struct ResetInteractionObject__Class;
struct ResetInteractionObject {
    struct ResetInteractionObject__Class* klass;
    MonitorData* monitor;
    struct ResetInteractionObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResetInteractionObject_FWDDECL)
#define IL2CPP_STRUCT_ResetInteractionObject_FWDDECL
#include <Modloader/app/structs/ResetInteractionObject__Class.h>
#endif
#undef IL2CPP_STRUCT_ResetInteractionObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResetInteractionObject_DEFINED) && !defined(IL2CPP_STRUCT_ResetInteractionObject_FWDDECL)
#include <Modloader/app/structs/ResetInteractionObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResetInteractionObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
