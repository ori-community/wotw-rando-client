#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestroyObjectAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestroyObjectAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyObjectAction_DEFINED)
#include <Modloader/app/structs/DestroyObjectAction__Fields.h>
#if defined(IL2CPP_STRUCT_DestroyObjectAction__Fields_DEFINED)
#define IL2CPP_STRUCT_DestroyObjectAction_DEFINED
struct DestroyObjectAction__Class;
struct DestroyObjectAction {
    struct DestroyObjectAction__Class* klass;
    MonitorData* monitor;
    struct DestroyObjectAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestroyObjectAction_FWDDECL)
#define IL2CPP_STRUCT_DestroyObjectAction_FWDDECL
#include <Modloader/app/structs/DestroyObjectAction__Class.h>
#endif
#undef IL2CPP_STRUCT_DestroyObjectAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyObjectAction_DEFINED) && !defined(IL2CPP_STRUCT_DestroyObjectAction_FWDDECL)
#include <Modloader/app/structs/DestroyObjectAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestroyObjectAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
