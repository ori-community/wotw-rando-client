#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeashHookLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeashHookLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashHookLogic_DEFINED)
#include <Modloader/app/structs/LeashHookLogic__Fields.h>
#if defined(IL2CPP_STRUCT_LeashHookLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_LeashHookLogic_DEFINED
struct LeashHookLogic__Class;
struct LeashHookLogic {
    struct LeashHookLogic__Class* klass;
    MonitorData* monitor;
    struct LeashHookLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeashHookLogic_FWDDECL)
#define IL2CPP_STRUCT_LeashHookLogic_FWDDECL
#include <Modloader/app/structs/LeashHookLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_LeashHookLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashHookLogic_DEFINED) && !defined(IL2CPP_STRUCT_LeashHookLogic_FWDDECL)
#include <Modloader/app/structs/LeashHookLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeashHookLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
