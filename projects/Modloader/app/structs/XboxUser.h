#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxUser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxUser_DEFINED)
#include <Modloader/app/structs/XboxUser__Fields.h>
#if defined(IL2CPP_STRUCT_XboxUser__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxUser_DEFINED
struct XboxUser__Class;
struct XboxUser {
    struct XboxUser__Class* klass;
    MonitorData* monitor;
    struct XboxUser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxUser_FWDDECL)
#define IL2CPP_STRUCT_XboxUser_FWDDECL
#include <Modloader/app/structs/XboxUser__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxUser_DEFINED) && !defined(IL2CPP_STRUCT_XboxUser_FWDDECL)
#include <Modloader/app/structs/XboxUser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxUser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
