#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StompableFloor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StompableFloor_INITIALIZING
#if !defined(IL2CPP_STRUCT_StompableFloor_DEFINED)
#include <Modloader/app/structs/StompableFloor__Fields.h>
#if defined(IL2CPP_STRUCT_StompableFloor__Fields_DEFINED)
#define IL2CPP_STRUCT_StompableFloor_DEFINED
struct StompableFloor__Class;
struct StompableFloor {
    struct StompableFloor__Class* klass;
    MonitorData* monitor;
    struct StompableFloor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StompableFloor_FWDDECL)
#define IL2CPP_STRUCT_StompableFloor_FWDDECL
#include <Modloader/app/structs/StompableFloor__Class.h>
#endif
#undef IL2CPP_STRUCT_StompableFloor_INITIALIZING
#if !defined(IL2CPP_STRUCT_StompableFloor_DEFINED) && !defined(IL2CPP_STRUCT_StompableFloor_FWDDECL)
#include <Modloader/app/structs/StompableFloor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StompableFloor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
