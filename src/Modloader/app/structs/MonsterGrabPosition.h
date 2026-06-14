#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonsterGrabPosition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonsterGrabPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonsterGrabPosition_DEFINED)
#include <Modloader/app/structs/MonsterGrabPosition__Fields.h>
#if defined(IL2CPP_STRUCT_MonsterGrabPosition__Fields_DEFINED)
#define IL2CPP_STRUCT_MonsterGrabPosition_DEFINED
struct MonsterGrabPosition__Class;
struct MonsterGrabPosition {
    struct MonsterGrabPosition__Class* klass;
    MonitorData* monitor;
    struct MonsterGrabPosition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonsterGrabPosition_FWDDECL)
#define IL2CPP_STRUCT_MonsterGrabPosition_FWDDECL
#include <Modloader/app/structs/MonsterGrabPosition__Class.h>
#endif
#undef IL2CPP_STRUCT_MonsterGrabPosition_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonsterGrabPosition_DEFINED) && !defined(IL2CPP_STRUCT_MonsterGrabPosition_FWDDECL)
#include <Modloader/app/structs/MonsterGrabPosition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonsterGrabPosition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
