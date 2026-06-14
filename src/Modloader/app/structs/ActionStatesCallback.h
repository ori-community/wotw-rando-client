#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionStatesCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionStatesCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionStatesCallback_DEFINED)
#include <Modloader/app/structs/ActionStatesCallback__Fields.h>
#if defined(IL2CPP_STRUCT_ActionStatesCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionStatesCallback_DEFINED
struct ActionStatesCallback__Class;
struct ActionStatesCallback {
    struct ActionStatesCallback__Class* klass;
    MonitorData* monitor;
    struct ActionStatesCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionStatesCallback_FWDDECL)
#define IL2CPP_STRUCT_ActionStatesCallback_FWDDECL
#include <Modloader/app/structs/ActionStatesCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionStatesCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionStatesCallback_DEFINED) && !defined(IL2CPP_STRUCT_ActionStatesCallback_FWDDECL)
#include <Modloader/app/structs/ActionStatesCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionStatesCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
