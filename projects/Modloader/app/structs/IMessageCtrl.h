#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMessageCtrl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMessageCtrl_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMessageCtrl_DEFINED)
#define IL2CPP_STRUCT_IMessageCtrl_DEFINED
struct IMessageCtrl__Class;
struct IMessageCtrl {
    struct IMessageCtrl__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMessageCtrl_FWDDECL)
#define IL2CPP_STRUCT_IMessageCtrl_FWDDECL
#include <Modloader/app/structs/IMessageCtrl__Class.h>
#endif
#undef IL2CPP_STRUCT_IMessageCtrl_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMessageCtrl_DEFINED) && !defined(IL2CPP_STRUCT_IMessageCtrl_FWDDECL)
#include <Modloader/app/structs/IMessageCtrl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMessageCtrl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
