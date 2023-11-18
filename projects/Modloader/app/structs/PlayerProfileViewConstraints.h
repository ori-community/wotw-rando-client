#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerProfileViewConstraints_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerProfileViewConstraints_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerProfileViewConstraints_DEFINED)
#include <Modloader/app/structs/PlayerProfileViewConstraints__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerProfileViewConstraints__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerProfileViewConstraints_DEFINED
struct PlayerProfileViewConstraints__Class;
struct PlayerProfileViewConstraints {
    struct PlayerProfileViewConstraints__Class* klass;
    MonitorData* monitor;
    struct PlayerProfileViewConstraints__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerProfileViewConstraints_FWDDECL)
#define IL2CPP_STRUCT_PlayerProfileViewConstraints_FWDDECL
#include <Modloader/app/structs/PlayerProfileViewConstraints__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerProfileViewConstraints_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerProfileViewConstraints_DEFINED) && !defined(IL2CPP_STRUCT_PlayerProfileViewConstraints_FWDDECL)
#include <Modloader/app/structs/PlayerProfileViewConstraints.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerProfileViewConstraints.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
