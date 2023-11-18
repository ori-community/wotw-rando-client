#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionTimer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionTimer_DEFINED)
#include <Modloader/app/structs/ActionTimer__Fields.h>
#if defined(IL2CPP_STRUCT_ActionTimer__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionTimer_DEFINED
struct ActionTimer__Class;
struct ActionTimer {
    struct ActionTimer__Class* klass;
    MonitorData* monitor;
    struct ActionTimer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionTimer_FWDDECL)
#define IL2CPP_STRUCT_ActionTimer_FWDDECL
#include <Modloader/app/structs/ActionTimer__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionTimer_DEFINED) && !defined(IL2CPP_STRUCT_ActionTimer_FWDDECL)
#include <Modloader/app/structs/ActionTimer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionTimer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
