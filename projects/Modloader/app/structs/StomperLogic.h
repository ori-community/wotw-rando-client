#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StomperLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StomperLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_StomperLogic_DEFINED)
#include <Modloader/app/structs/StomperLogic__Fields.h>
#if defined(IL2CPP_STRUCT_StomperLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_StomperLogic_DEFINED
struct StomperLogic__Class;
struct StomperLogic {
    struct StomperLogic__Class* klass;
    MonitorData* monitor;
    struct StomperLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StomperLogic_FWDDECL)
#define IL2CPP_STRUCT_StomperLogic_FWDDECL
#include <Modloader/app/structs/StomperLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_StomperLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_StomperLogic_DEFINED) && !defined(IL2CPP_STRUCT_StomperLogic_FWDDECL)
#include <Modloader/app/structs/StomperLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StomperLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
