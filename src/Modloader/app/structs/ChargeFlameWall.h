#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChargeFlameWall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChargeFlameWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargeFlameWall_DEFINED)
#include <Modloader/app/structs/ChargeFlameWall__Fields.h>
#if defined(IL2CPP_STRUCT_ChargeFlameWall__Fields_DEFINED)
#define IL2CPP_STRUCT_ChargeFlameWall_DEFINED
struct ChargeFlameWall__Class;
struct ChargeFlameWall {
    struct ChargeFlameWall__Class* klass;
    MonitorData* monitor;
    struct ChargeFlameWall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChargeFlameWall_FWDDECL)
#define IL2CPP_STRUCT_ChargeFlameWall_FWDDECL
#include <Modloader/app/structs/ChargeFlameWall__Class.h>
#endif
#undef IL2CPP_STRUCT_ChargeFlameWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargeFlameWall_DEFINED) && !defined(IL2CPP_STRUCT_ChargeFlameWall_FWDDECL)
#include <Modloader/app/structs/ChargeFlameWall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChargeFlameWall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
