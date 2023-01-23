#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericCollisionTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericCollisionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericCollisionTrigger_DEFINED)
#include <Modloader/app/structs/GenericCollisionTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_GenericCollisionTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericCollisionTrigger_DEFINED
struct GenericCollisionTrigger__Class;
struct GenericCollisionTrigger {
    struct GenericCollisionTrigger__Class* klass;
    MonitorData* monitor;
    struct GenericCollisionTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericCollisionTrigger_FWDDECL)
#define IL2CPP_STRUCT_GenericCollisionTrigger_FWDDECL
#include <Modloader/app/structs/GenericCollisionTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericCollisionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericCollisionTrigger_DEFINED) && !defined(IL2CPP_STRUCT_GenericCollisionTrigger_FWDDECL)
#include <Modloader/app/structs/GenericCollisionTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericCollisionTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
