#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZProjectionFollower_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZProjectionFollower_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZProjectionFollower_DEFINED)
#include <Modloader/app/structs/ZProjectionFollower__Fields.h>
#if defined(IL2CPP_STRUCT_ZProjectionFollower__Fields_DEFINED)
#define IL2CPP_STRUCT_ZProjectionFollower_DEFINED
struct ZProjectionFollower__Class;
struct ZProjectionFollower {
    struct ZProjectionFollower__Class* klass;
    MonitorData* monitor;
    struct ZProjectionFollower__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZProjectionFollower_FWDDECL)
#define IL2CPP_STRUCT_ZProjectionFollower_FWDDECL
#include <Modloader/app/structs/ZProjectionFollower__Class.h>
#endif
#undef IL2CPP_STRUCT_ZProjectionFollower_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZProjectionFollower_DEFINED) && !defined(IL2CPP_STRUCT_ZProjectionFollower_FWDDECL)
#include <Modloader/app/structs/ZProjectionFollower.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZProjectionFollower.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
