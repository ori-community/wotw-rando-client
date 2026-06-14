#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IInputTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IInputTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInputTransition_DEFINED)
#define IL2CPP_STRUCT_IInputTransition_DEFINED
struct IInputTransition__Class;
struct IInputTransition {
    struct IInputTransition__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IInputTransition_FWDDECL)
#define IL2CPP_STRUCT_IInputTransition_FWDDECL
#include <Modloader/app/structs/IInputTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_IInputTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInputTransition_DEFINED) && !defined(IL2CPP_STRUCT_IInputTransition_FWDDECL)
#include <Modloader/app/structs/IInputTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IInputTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
