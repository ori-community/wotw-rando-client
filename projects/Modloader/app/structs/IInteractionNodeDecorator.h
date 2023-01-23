#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IInteractionNodeDecorator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IInteractionNodeDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInteractionNodeDecorator_DEFINED)
#define IL2CPP_STRUCT_IInteractionNodeDecorator_DEFINED
struct IInteractionNodeDecorator__Class;
struct IInteractionNodeDecorator {
    struct IInteractionNodeDecorator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IInteractionNodeDecorator_FWDDECL)
#define IL2CPP_STRUCT_IInteractionNodeDecorator_FWDDECL
#include <Modloader/app/structs/IInteractionNodeDecorator__Class.h>
#endif
#undef IL2CPP_STRUCT_IInteractionNodeDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInteractionNodeDecorator_DEFINED) && !defined(IL2CPP_STRUCT_IInteractionNodeDecorator_FWDDECL)
#include <Modloader/app/structs/IInteractionNodeDecorator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IInteractionNodeDecorator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
