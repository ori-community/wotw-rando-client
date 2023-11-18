#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneUsers_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneUsers_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneUsers_DEFINED)
#define IL2CPP_STRUCT_XboxOneUsers_DEFINED
struct XboxOneUsers__Class;
struct XboxOneUsers {
    struct XboxOneUsers__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneUsers_FWDDECL)
#define IL2CPP_STRUCT_XboxOneUsers_FWDDECL
#include <Modloader/app/structs/XboxOneUsers__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneUsers_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneUsers_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneUsers_FWDDECL)
#include <Modloader/app/structs/XboxOneUsers.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneUsers.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
