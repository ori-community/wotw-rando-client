#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserControlInteractions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserControlInteractions_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserControlInteractions_DEFINED)
#include <Modloader/app/structs/UserControlInteractions__Fields.h>
#if defined(IL2CPP_STRUCT_UserControlInteractions__Fields_DEFINED)
#define IL2CPP_STRUCT_UserControlInteractions_DEFINED
struct UserControlInteractions__Class;
struct UserControlInteractions {
    struct UserControlInteractions__Class* klass;
    MonitorData* monitor;
    struct UserControlInteractions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserControlInteractions_FWDDECL)
#define IL2CPP_STRUCT_UserControlInteractions_FWDDECL
#include <Modloader/app/structs/UserControlInteractions__Class.h>
#endif
#undef IL2CPP_STRUCT_UserControlInteractions_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserControlInteractions_DEFINED) && !defined(IL2CPP_STRUCT_UserControlInteractions_FWDDECL)
#include <Modloader/app/structs/UserControlInteractions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserControlInteractions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
