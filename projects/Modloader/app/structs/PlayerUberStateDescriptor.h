#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateDescriptor_DEFINED)
#include <Modloader/app/structs/PlayerUberStateDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUberStateDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateDescriptor_DEFINED
struct PlayerUberStateDescriptor__Class;
struct PlayerUberStateDescriptor {
    struct PlayerUberStateDescriptor__Class* klass;
    MonitorData* monitor;
    struct PlayerUberStateDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateDescriptor_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateDescriptor_FWDDECL
#include <Modloader/app/structs/PlayerUberStateDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateDescriptor_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
