#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionStayTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionStayTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionStayTrigger_DEFINED)
#include <Modloader/app/structs/CollisionStayTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_CollisionStayTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_CollisionStayTrigger_DEFINED
struct CollisionStayTrigger__Class;
struct CollisionStayTrigger {
    struct CollisionStayTrigger__Class* klass;
    MonitorData* monitor;
    struct CollisionStayTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionStayTrigger_FWDDECL)
#define IL2CPP_STRUCT_CollisionStayTrigger_FWDDECL
#include <Modloader/app/structs/CollisionStayTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_CollisionStayTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionStayTrigger_DEFINED) && !defined(IL2CPP_STRUCT_CollisionStayTrigger_FWDDECL)
#include <Modloader/app/structs/CollisionStayTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionStayTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
